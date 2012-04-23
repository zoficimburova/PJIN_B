#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <pridej_zaznam.h>
#include <export_databaze.h>
#include "export_databaze.h"

#include <QtGui/QApplication>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <iostream>
#include <QFileDialog>
#include <QSqlError>
#include <QMessageBox>
#include <QComboBox>
#include <QSqlRecord>
#include <QSqlField>
#include <QModelIndex>
#include <QGraphicsItem>
#include <QGraphicsWidget>

#include <QDebug>


using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->cb_obdobi, SIGNAL(currentIndexChanged(QString)), this, SLOT(zobrazit()));
    connect(ui->cb_okresy, SIGNAL(currentIndexChanged(QString)), this, SLOT(zobrazit()));
    connect(ui->cb_stav,   SIGNAL(currentIndexChanged(QString)), this, SLOT(zobrazit()));
    connect(ui->cb_zpusob, SIGNAL(currentIndexChanged(QString)), this, SLOT(zobrazit()));
}

MainWindow::~MainWindow(){
    delete ui;
}

bool MainWindow::databaze_existuje(QSqlDatabase db) {
    return db.tables().contains("regions", Qt::CaseInsensitive);
}

void MainWindow::vytvorit_strukturu_databaze(QSqlDatabase db){
    QFile szz(":/sql/nova_databaze.sql");
    if (szz.open(QIODevice::ReadOnly)){
        QTextStream data(&szz);
        QString sql;
        while (!data.atEnd()){
            QString line = data.readLine();
            sql += line;
            if (line.contains(";")){
                QSqlQuery query(db);
                query.exec(sql);
                sql = "";
            }
        }
    }
}


// pripojeni databaze / vytvoreni nove databaze
void MainWindow::on_action_Pripoj_databazi_triggered(){

    ui->action_Nov->setEnabled(false);
    ui->action_Export_databaze->setEnabled(false);


    QFileDialog fileDialog(0,trUtf8("otevreni databaze"));
    fileDialog.setAcceptMode(QFileDialog::AcceptOpen);
    fileDialog.setFileMode(QFileDialog::AnyFile);
    fileDialog.setDefaultSuffix("db");
    fileDialog.setNameFilter(tr("Sqlite DB (*.db)"));
    fileDialog.setViewMode(QFileDialog::Detail);

    if (!fileDialog.exec()) return;

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString sqliteName = fileDialog.selectedFiles()[0];

    MainWindow::jmeno_dab = sqliteName;
    db.setDatabaseName(jmeno_dab);

    if (!db.open()){
        cerr << "neni pripojena databaze";
        return;
    }

    if (!databaze_existuje(db))
        vytvorit_strukturu_databaze(db);


    aktualizuj_cb();

    ui->action_Nov->setEnabled(true);
    ui->action_Export_databaze->setEnabled(true);

    ui->cb_obdobi-> setEnabled(true);
    ui->cb_okresy-> setEnabled(true);
    ui->cb_stav->   setEnabled(true);
    ui->cb_zpusob-> setEnabled(true);
    ui->textEdit->  setEnabled(true);

    QString prikaz =    "select objects.name, regions.name from objects "
                        "join times on objects.time_id = times.id "
                        "join conditions on conditions.id = objects.condition_id "
                        "join categories on categories.id = objects.category_id "
                        "join regions on regions.id = objects.region_id ";

    QSqlQuery aaa(db);
    aaa.exec(prikaz);
    QSqlQuery query = aaa;
    model.setQuery(query);
    model.setHeaderData(0,Qt::Horizontal, QObject::tr("obec"));
    model.setHeaderData(1,Qt::Horizontal, QObject::tr("okres"));

    ui->tableView->setModel(&model);
    ui->tableView->setColumnWidth(0, 150);
    ui->tableView->setColumnWidth(1, 150);

    connect(ui->tableView->selectionModel(),
              SIGNAL(currentChanged(QModelIndex,QModelIndex)),
              this, SLOT(rowChanged(QModelIndex)));

    vrati_jmeno();
    qDebug() << vrati_jmeno();
}

void MainWindow::on_action_Konec_triggered(){
    close();
}

void MainWindow::zobrazit(){
    QSqlDatabase dbz = QSqlDatabase::database();
    dbz.setDatabaseName(jmeno_dab);

    connect(ui->tableView->selectionModel(),
                   SIGNAL(currentChanged(QModelIndex,QModelIndex)),
                   this, SLOT(rowChanged(QModelIndex))
                   );

    QString obdobi  = ui->cb_obdobi->currentText();
    QString okresy  = ui->cb_okresy->currentText();
    QString zpusob  = ui->cb_zpusob->currentText();
    QString stav    = ui->cb_stav->currentText();

    int obindex = ui->cb_obdobi->currentIndex();
    int okindex = ui->cb_okresy->currentIndex();
    int zpindex = ui->cb_zpusob->currentIndex();
    int stindex = ui->cb_stav->currentIndex();

    QString sOB, sOK, sZP, sST;

    QString select =    "select objects.name, regions.name from objects "
                        "join times on objects.time_id = times.id "
                        "join conditions on conditions.id = objects.condition_id "
                        "join categories on categories.id = objects.category_id "
                        "join regions on regions.id = objects.region_id ";

    if (obindex != 0) sOB = " WHERE times.name = '" + obdobi + "'";

    if (okindex != 0 && obindex == 0)
        sOK = " WHERE regions.name = '" + okresy + "'";
    else
        if (okindex == 0) sOK.clear();
        else sOK = " AND regions.name = '" + okresy + "'";


    if (zpindex != 0 && obindex == 0 && okindex == 0)
       sZP = " WHERE objects.reason = '" + zpusob + "'";
    else    
        if (zpindex == 0) sZP.clear();
        else sZP = " AND objects.reason = '" + zpusob + "'";


    if (stindex != 0 && obindex == 0 && okindex == 0 && zpindex == 0 )
       sST = " WHERE conditions.name = '" + stav + "'";
    else    
        if (stindex == 0) sST.clear();
        else sST = " AND conditions.name = '" + stav + "'";

    select += sOB + sOK + sZP + sST;

    QSqlQuery query(dbz);
    query.exec(select);


    model.setQuery(select);
    model.setHeaderData(0,Qt::Horizontal, QObject::tr("obec"));
    model.setHeaderData(1,Qt::Horizontal, QObject::tr("okres"));
    ui->tableView->setModel(&model);

    QString vysledek = "";

       while (query.next()){
           int i = 0;
           while (query.value(i).isValid())
               vysledek += query.value(i++).toString() + "\t";

           vysledek += "\n";
       }
}

void MainWindow::on_action_Nov_triggered(){
    pridej_zaznam* z = new pridej_zaznam(this, jmeno_dab);
    z->set_jmeno(jmeno_dab);
    z->show();
    z->setWindowTitle("Novy zaznam");

}

void MainWindow::on_action_Export_databaze_triggered(){
    QFileDialog fileDialog(0,trUtf8("Export databaze"));
    fileDialog.setAcceptMode(QFileDialog::AcceptSave);
    fileDialog.setDefaultSuffix("sql");
    fileDialog.setNameFilter(tr("SQL soubory (*.sql)"));
    fileDialog.setViewMode(QFileDialog::Detail);

    if (!fileDialog.exec()) return;

    QFile sql(fileDialog.selectedFiles()[0]);
    sql.open(QIODevice::WriteOnly);

    QTextStream data(&sql);

    data << "BEGIN;\n\n";
    data << export_databaze().exec();
    data << "COMMIT;\n";
}

 void MainWindow::rowChanged(QModelIndex index)
{
    QSqlDatabase dbz = QSqlDatabase::database();
    dbz.setDatabaseName(jmeno_dab);
    index_row = index.row();
    QSqlRecord r = model.record(index_row);
    QString bunka;
    QString joiny;
    joiny.clear();

    QString where;
    QString where2;

    QString select_text;
    select_text.clear();

    QString select_text2;
    select_text2.clear();

    bunka =  r.field("name").value().toString();

    QSqlQuery id_query("Select id from objects where name = '"+bunka+"';",dbz);
    id_query.next();
    int id = id_query.value(0).toInt();

    QString joiny2 =    "select objects.name, regions.name, objects.gpslat, objects.gpslon, times.name, objects.reason, conditions.name from objects "
                      "join times on objects.time_id = times.id "
                      "join conditions on conditions.id = objects.condition_id "
                      "join categories on categories.id = objects.category_id "
                      "join regions on regions.id = objects.region_id ";

    where2 = "where objects.name = ";

    select_text2 = joiny2 + where2 + "'"+ bunka + "'";

    QSqlQuery query2(dbz);
    query2.exec(select_text2);


    joiny =   "select text from objects "
          "join times on objects.time_id = times.id "
          "join conditions on conditions.id = objects.condition_id "
          "join categories on categories.id = objects.category_id "
          "join regions on regions.id = objects.region_id "
          "join stories on objects.id = stories.object_id ";
          //"join images on objects.id = images.object_id "

    where = "where objects.name = ";

    select_text = joiny + where + "'"+ bunka + "'";

    QString vysledek2 = "";

          while (query2.next())
          {
              int i = 0;
              while (query2.value(i).isValid())
              {
                  vysledek2 += query2.value(i).toString() + "\t";
                  i++;
              }
              vysledek2 += "\n";
          }

          model2.setQuery(select_text2);
          model2.setHeaderData(0,Qt::Horizontal, QObject::tr("obec"));
          model2.setHeaderData(1,Qt::Horizontal, QObject::tr("okres"));
          model2.setHeaderData(2,Qt::Horizontal, QObject::tr("GPS N"));
          model2.setHeaderData(3,Qt::Horizontal, QObject::tr("GPS E"));
          model2.setHeaderData(4,Qt::Horizontal, QObject::tr("Obdobi zaniku"));
          model2.setHeaderData(5,Qt::Horizontal, QObject::tr("Duvod zaniku"));
          model2.setHeaderData(6,Qt::Horizontal, QObject::tr("Stav"));

          ui->tableView_2->setModel(&model2);
         int  width = ui->tableView_2->width();

          ui->tableView_2->setColumnWidth(4, 150);
          ui->tableView_2->setColumnWidth(5, 150);
          ui->tableView_2->setColumnWidth(6, 159.7);

          qDebug() << width;

  QSqlQuery query(dbz);
  query.exec(select_text);

  QString vysledek = "";

         while (query.next())
         {
             int i = 0;
             while (query.value(i).isValid())
             {
                 vysledek += query.value(i).toString() + "\t";
                 i++;
             }
             vysledek += "\n";
         }

         QSqlQuery location("select gpslat, gpslon from objects where name = '"+bunka+"';",dbz);
         if(location.next())
            nastav_mapu(location.value(0).toFloat(),location.value(1).toFloat());
         else
             ui->map->setDisabled(true);

         nacti_nahledy(id,dbz);

if (vysledek == "")
    vysledek = "Tato obec nema zadny text";

ui->textEdit->setText(vysledek);

}

void MainWindow::aktualizuj_cb() {
    QSqlDatabase db = QSqlDatabase::database();
    db.setDatabaseName(jmeno_dab);
    napln_cb(QSqlQuery("select name, id from regions", db),           *ui->cb_okresy);
    napln_cb(QSqlQuery("select name, id from conditions", db),        *ui->cb_stav);
    napln_cb(QSqlQuery("select name, id from times", db),             *ui->cb_obdobi);
    napln_cb(QSqlQuery("select distinct reason, 0 from objects", db), *ui->cb_zpusob);
}

void MainWindow::napln_cb(QSqlQuery query, QComboBox &comboBox){
    while(query.next())
            comboBox.addItem(query.value(0).toString(),query.value(1));
}


void MainWindow::nastav_mapu(float lat, float lon){
    QString adresa = QString("http://maps.google.com/maps?f=q&hl=cs&t=h&z=15&ll=%1,%2&output=embed").arg(lat).arg(lon);
    ui->map->setUrl(adresa);
    ui->map->setEnabled(true);
}


void MainWindow::nacti_nahledy(int object_id, QSqlDatabase db){
    QSqlQuery images(QString("Select id from images where object_id = '%1';").arg(object_id),db);
    while(images.next()){
        qDebug() << "snazim se nacist obrazek" << images.value(0).toString() << ".jpg a nevim proc to nefunguje";
    }
}

QString MainWindow::vrati_jmeno(){
               return jmeno_dab;
}

