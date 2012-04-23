#ifndef PRIDEJ_ZAZNAM_H
#define PRIDEJ_ZAZNAM_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QComboBox>
#include "mainwindow.h"


namespace Ui {
    class pridej_zaznam;
}

class pridej_zaznam : public QMainWindow
{
    Q_OBJECT

public:
    explicit pridej_zaznam(QWidget *parent = 0, QString jmeno = "");
    void set_jmeno(QString jmeno);
    ~pridej_zaznam();

private slots:

    void cb_listener();
    void on_pbv_vlozit_clicked();
    void aktualizuj_cb();

private:
    Ui::pridej_zaznam *ui;
    QString jmeno;
    void napln_cb(QSqlQuery query, QComboBox &comboBox);
    QSqlQuery db_select(QString query_string);
    void db_exec(QString query_string);
};

#endif // PRIDEJ_ZAZNAM_H
