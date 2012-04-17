#include "pridej_zaznam.h"
#include "ui_pridej_zaznam.h"
#include <iostream>
#include <mainwindow.h>
#include <string>



#include <QDebug>


pridej_zaznam::pridej_zaznam(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pridej_zaznam)
{
    ui->setupUi(this);

    connect(ui->cbv_zanik,   SIGNAL(currentIndexChanged(QString)), this, SLOT(nacti_zaznam()));
    connect(ui->cbv_obdobi,  SIGNAL(currentIndexChanged(QString)), this, SLOT(nacti_zaznam()));

}

pridej_zaznam::~pridej_zaznam()
{
    delete ui;
}


void pridej_zaznam::on_pbv_vlozit_clicked()
{
    nacti_zaznam();


}

void pridej_zaznam::nacti_zaznam()
{
    QString nazev, zpusob_zaniku, okres, obdobi_zaniku, stav, zem_sirka, zem_delka, popis;

    nazev           = ui->lev_nazev ->text();
    zpusob_zaniku   = ui->cbv_zanik ->currentText();
    okres           = ui->cbv_okres ->currentText();
    obdobi_zaniku   = ui->cbv_obdobi->currentText();
    stav            = ui->cbv_stav  ->currentText();
    zem_sirka       = ui->lev_sirka ->text();
    zem_delka       = ui->lev_delka ->text();
    popis           = ui->pte_popis ->toPlainText();

    int ind_zan = ui->cbv_zanik->currentIndex();
    int ind_obd = ui->cbv_obdobi->currentIndex();

    if (ind_zan == 43)
     {
         ui->lev_zpusob->setEnabled(true);
         zpusob_zaniku = ui->lev_zpusob->text();
     }

    if (ind_obd == 11)
     {
         ui->lev_obdobi->setEnabled(true);
         obdobi_zaniku = ui->lev_obdobi->text();
     }

    qDebug() << zpusob_zaniku
             << obdobi_zaniku;

    QString insertik;

    insertik = "insert into ";

QString max_id = "SELECT max(regions.id) FROM regions";

    qDebug() << max_id;








}


