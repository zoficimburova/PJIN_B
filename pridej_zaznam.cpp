#include "pridej_zaznam.h"
#include "ui_pridej_zaznam.h"
#include <iostream>
#include <mainwindow.h>
#include <string>

using namespace std;

#include <QDebug>
#include <QSqlQuery>

pridej_zaznam::pridej_zaznam(QWidget *parent, QString jmeno) :
    QMainWindow(parent),
    ui(new Ui::pridej_zaznam)
{
    ui->setupUi(this);

    connect(ui->cbv_zanik,   SIGNAL(currentIndexChanged(QString)), this, SLOT(cb_listener()));
    connect(ui->cbv_okres,   SIGNAL(currentIndexChanged(QString)), this, SLOT(cb_listener()));
    connect(ui->cbv_obdobi,  SIGNAL(currentIndexChanged(QString)), this, SLOT(cb_listener()));
    set_jmeno(jmeno);
    aktualizuj_cb();
}

pridej_zaznam::~pridej_zaznam(){
    delete ui;
}

void pridej_zaznam::on_pbv_vlozit_clicked(){
    QString nazev, zpusob_zaniku, okres, obdobi_zaniku, stav, zem_sirka, zem_delka, popis;
    nazev           = ui->lev_nazev ->text();
    zpusob_zaniku   = ui->lev_zpusob->isEnabled()?ui->lev_zpusob->text():ui->cbv_zanik ->currentText();
    okres           = ui->lev_okres ->isEnabled()?okres = ui->lev_okres->text():ui->cbv_okres ->currentText();
    obdobi_zaniku   = ui->lev_obdobi->isEnabled()?obdobi_zaniku = ui->lev_obdobi->text():ui->cbv_obdobi->currentText();
    stav            = ui->cbv_stav  ->currentText();
    zem_sirka       = ui->lev_sirka ->text();
    zem_delka       = ui->lev_delka ->text();
    popis           = ui->pte_popis ->toPlainText();

    int object_id = db_select("SELECT max(id) FROM objects").value(0).toInt()+1;;

    int regions_id,times_id;
    if(ui->lev_obdobi->isEnabled()){
       times_id = db_select("SELECT max(id) FROM times").value(0).toInt()+1;
       db_exec(QString("INSERT INTO times (id, name) VALUES ('%1', '%2')"
                            ).arg(times_id).arg(obdobi_zaniku));
    } else
        times_id = ui->cbv_obdobi->itemData(ui->cbv_obdobi->currentIndex()).toInt();

    if(ui->lev_okres->isEnabled()){
        regions_id = db_select("SELECT max(id) FROM regions").value(0).toInt()+1;
        db_exec(QString("INSERT INTO regions (id, name) VALUES ('%1', '%2')"
                    ).arg(regions_id).arg(okres));
    } else
       regions_id = ui->cbv_okres->itemData(ui->cbv_okres->currentIndex()).toInt();

    int stories_id = db_select("SELECT max(id) FROM stories").value(0).toInt()+1;
    db_exec(QString("INSERT INTO stories (id, object_id, text) VALUES ('%1', '%2', '%3')"
                ).arg(stories_id).arg(object_id).arg(popis));

    db_exec(QString("INSERT INTO objects (id, category_id, condition_id, region_id, name, reason, gpslon, gpslat, time_id)"
        "VALUES('%1', '%2', '%3', '%4', '%5', '%6', '%7', '%8', '%9')"
                   ).arg(object_id).arg(10).arg(ui->cbv_stav->itemData(ui->cbv_stav->currentIndex()).toInt() +1).arg(regions_id).arg(nazev).arg(zpusob_zaniku).arg(zem_delka).arg(zem_sirka).arg(times_id));
}

QSqlQuery pridej_zaznam::db_select(QString query_string){
    QSqlDatabase db = QSqlDatabase::database();
    db.setDatabaseName(jmeno);
    QSqlQuery query(query_string,db);
    query.next();
    return query;
}

void pridej_zaznam::db_exec(QString query_string){
    QSqlDatabase db = QSqlDatabase::database();
    db.setDatabaseName(jmeno);
    QSqlQuery query(db);
    query.exec(query_string);
}

void pridej_zaznam::cb_listener(){
     ui->lev_zpusob->setEnabled(ui->cbv_zanik ->currentIndex() == 1);
     ui->lev_okres ->setEnabled(ui->cbv_okres ->currentIndex() == 1);
     ui->lev_obdobi->setEnabled(ui->cbv_obdobi->currentIndex() == 1);
}

void pridej_zaznam::aktualizuj_cb() {
    QSqlDatabase db = QSqlDatabase::database();
    db.setDatabaseName(jmeno);
    napln_cb(QSqlQuery("select name, id from regions", db), *ui->cbv_okres);
    napln_cb(QSqlQuery("select name, id from conditions", db), *ui->cbv_stav);
    napln_cb(QSqlQuery("select name, id from times", db), *ui->cbv_obdobi);
    napln_cb(QSqlQuery("select distinct reason, 0 from objects", db), *ui->cbv_zanik);
 }

void pridej_zaznam::napln_cb(QSqlQuery query, QComboBox &comboBox){
    while(query.next())
            comboBox.addItem(query.value(0).toString(),query.value(1));
}

void pridej_zaznam::set_jmeno(QString njmeno){
    jmeno = njmeno;
}



