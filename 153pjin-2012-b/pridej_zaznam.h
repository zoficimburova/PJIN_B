#ifndef PRIDEJ_ZAZNAM_H
#define PRIDEJ_ZAZNAM_H

#include <QMainWindow>
#include "mainwindow.h"


namespace Ui {
    class pridej_zaznam;
}

class pridej_zaznam : public QMainWindow
{
    Q_OBJECT

public:
    explicit pridej_zaznam(QWidget *parent = 0);
    ~pridej_zaznam();


private slots:
    void nacti_zaznam();

    void on_pbv_vlozit_clicked();



private:
    Ui::pridej_zaznam *ui;


};

#endif // PRIDEJ_ZAZNAM_H
