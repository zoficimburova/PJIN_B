#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QModelIndex>
#include <QString>
#include <QStringList>
#include <QComboBox>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QString vrati_jmeno();
    QString dk;


private slots:

    void on_action_Konec_triggered();
    void zobrazit();
    bool databaze_existuje(QSqlDatabase db);
    void vytvorit_strukturu_databaze(QSqlDatabase db);
    void on_action_Nov_triggered();
    void on_action_Pripoj_databazi_triggered();
    void on_action_Export_databaze_triggered();
    void rowChanged(QModelIndex index);
    void aktualizuj_cb();

private:
    Ui::MainWindow *ui;
    QSqlQueryModel model;
    QSqlQueryModel model2;

    void napln_cb(QSqlQuery query, QComboBox &comboBox);
    void nastav_mapu(float lat, float lon);
    void nacti_nahledy(int object_id, QSqlDatabase db);
    int index_row;
    QString jmeno_dab;

    QStringList qsl_okres, qsl_stav, qsl_obdobi, qsl_zpusob;

};

#endif // MAINWINDOW_H
