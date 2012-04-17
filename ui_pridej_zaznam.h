/********************************************************************************
** Form generated from reading UI file 'pridej_zaznam.ui'
**
** Created: Tue Apr 17 13:00:46 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIDEJ_ZAZNAM_H
#define UI_PRIDEJ_ZAZNAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pridej_zaznam
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLineEdit *lev_nazev;
    QComboBox *cbv_zanik;
    QLineEdit *lev_zpusob;
    QComboBox *cbv_okres;
    QComboBox *cbv_obdobi;
    QLineEdit *lev_obdobi;
    QComboBox *cbv_stav;
    QLineEdit *lev_sirka;
    QLineEdit *lev_delka;
    QLabel *label_7;
    QPlainTextEdit *pte_popis;
    QGridLayout *gridLayout_2;
    QLabel *label_1;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *pbv_vlozit;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *pridej_zaznam)
    {
        if (pridej_zaznam->objectName().isEmpty())
            pridej_zaznam->setObjectName(QString::fromUtf8("pridej_zaznam"));
        pridej_zaznam->resize(855, 384);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pridej_zaznam->sizePolicy().hasHeightForWidth());
        pridej_zaznam->setSizePolicy(sizePolicy);
        pridej_zaznam->setMaximumSize(QSize(855, 384));
        centralwidget = new QWidget(pridej_zaznam);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lev_nazev = new QLineEdit(centralwidget);
        lev_nazev->setObjectName(QString::fromUtf8("lev_nazev"));

        gridLayout->addWidget(lev_nazev, 0, 0, 1, 2);

        cbv_zanik = new QComboBox(centralwidget);
        cbv_zanik->setObjectName(QString::fromUtf8("cbv_zanik"));
        sizePolicy.setHeightForWidth(cbv_zanik->sizePolicy().hasHeightForWidth());
        cbv_zanik->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cbv_zanik, 1, 0, 1, 1);

        lev_zpusob = new QLineEdit(centralwidget);
        lev_zpusob->setObjectName(QString::fromUtf8("lev_zpusob"));
        lev_zpusob->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lev_zpusob->sizePolicy().hasHeightForWidth());
        lev_zpusob->setSizePolicy(sizePolicy1);
        lev_zpusob->setMaxLength(34767);

        gridLayout->addWidget(lev_zpusob, 1, 1, 1, 1);

        cbv_okres = new QComboBox(centralwidget);
        cbv_okres->setObjectName(QString::fromUtf8("cbv_okres"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cbv_okres->sizePolicy().hasHeightForWidth());
        cbv_okres->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(cbv_okres, 2, 0, 1, 1);

        cbv_obdobi = new QComboBox(centralwidget);
        cbv_obdobi->setObjectName(QString::fromUtf8("cbv_obdobi"));
        sizePolicy2.setHeightForWidth(cbv_obdobi->sizePolicy().hasHeightForWidth());
        cbv_obdobi->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(cbv_obdobi, 3, 0, 1, 1);

        lev_obdobi = new QLineEdit(centralwidget);
        lev_obdobi->setObjectName(QString::fromUtf8("lev_obdobi"));
        lev_obdobi->setEnabled(false);

        gridLayout->addWidget(lev_obdobi, 3, 1, 1, 1);

        cbv_stav = new QComboBox(centralwidget);
        cbv_stav->setObjectName(QString::fromUtf8("cbv_stav"));
        sizePolicy2.setHeightForWidth(cbv_stav->sizePolicy().hasHeightForWidth());
        cbv_stav->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(cbv_stav, 4, 0, 1, 1);

        lev_sirka = new QLineEdit(centralwidget);
        lev_sirka->setObjectName(QString::fromUtf8("lev_sirka"));
        sizePolicy2.setHeightForWidth(lev_sirka->sizePolicy().hasHeightForWidth());
        lev_sirka->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lev_sirka, 5, 0, 1, 1);

        lev_delka = new QLineEdit(centralwidget);
        lev_delka->setObjectName(QString::fromUtf8("lev_delka"));
        sizePolicy2.setHeightForWidth(lev_delka->sizePolicy().hasHeightForWidth());
        lev_delka->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lev_delka, 6, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 1, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 2, 1, 1);

        pte_popis = new QPlainTextEdit(centralwidget);
        pte_popis->setObjectName(QString::fromUtf8("pte_popis"));

        gridLayout_3->addWidget(pte_popis, 1, 2, 2, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_1 = new QLabel(centralwidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        gridLayout_2->addWidget(label_1, 0, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 3, 0, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 4, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 5, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 6, 0, 1, 1);

        pbv_vlozit = new QPushButton(centralwidget);
        pbv_vlozit->setObjectName(QString::fromUtf8("pbv_vlozit"));

        gridLayout_2->addWidget(pbv_vlozit, 7, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 2, 1);

        pridej_zaznam->setCentralWidget(centralwidget);
        label_7->raise();
        pte_popis->raise();
        menubar = new QMenuBar(pridej_zaznam);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 855, 27));
        pridej_zaznam->setMenuBar(menubar);
        statusbar = new QStatusBar(pridej_zaznam);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        pridej_zaznam->setStatusBar(statusbar);
        toolBar = new QToolBar(pridej_zaznam);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        pridej_zaznam->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(pridej_zaznam);

        QMetaObject::connectSlotsByName(pridej_zaznam);
    } // setupUi

    void retranslateUi(QMainWindow *pridej_zaznam)
    {
        pridej_zaznam->setWindowTitle(QApplication::translate("pridej_zaznam", "MainWindow", 0, QApplication::UnicodeUTF8));
        cbv_zanik->clear();
        cbv_zanik->insertItems(0, QStringList()
         << QApplication::translate("pridej_zaznam", "- - - - - - - - - -", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "VVP Boletice", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "VVP Dobr\303\241 Voda", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "VVP Hradi\305\241t\304\233", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "VVP Jince", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "VVP Libav\303\241", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "VVP Mlad\303\241", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "VVP Prameny", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "VVP Ralsko", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "T\304\233\305\276ba uhl\303\255 - Chomutov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "T\304\233\305\276ba uhl\303\255 - Most", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "T\304\233\305\276ba uhl\303\255 - Sokolov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "T\304\233\305\276ba uhl\303\255 - \303\232st\303\255 n.L.", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "T\304\233\305\276ba uranu", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "T\304\233\305\276ba ostatn\303\255ch surovin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Slo\305\276i\305\241t\304\233 pop\303\255lku", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "JE Dukovany", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "JE Temel\303\255n", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Hrani\304\215n\303\255 p\303\241smo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Vys\303\255dleno po roce 1945", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Radovesick\303\241 v\303\275sypka", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 P\305\231\303\255se\304\215nice", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 K\305\231imov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 Nechranice", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 \303\232jezd", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 Fl\303\241je", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 Hracholusky", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 Jesenice", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 Lipno", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 Hn\304\233vkovice", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 Kam\303\255k", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 Ko\305\231ensko", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 Lu\304\215ina", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 Orl\303\255k", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 Rozko\305\241", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 Slapy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 \305\275lutice", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 V\303\255r", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 \305\275elivka", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 Vranov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241dr\305\276 Nov\303\251 Ml\303\275ny", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "\305\275iveln\303\241 pohroma", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Zni\304\215eno nacistick\303\275m N\304\233meckem", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Nov\303\275", 0, QApplication::UnicodeUTF8)
        );
        cbv_okres->clear();
        cbv_okres->insertItems(0, QStringList()
         << QApplication::translate("pridej_zaznam", "- - - - - - - - - - ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Bene\305\241ov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Beroun", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Blansko", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "B\305\231eclav", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Brno - m\304\233sto", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Brno - venkov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Brunt\303\241l", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "\304\214esk\303\241 L\303\255pa", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "\304\214esk\303\251 Bud\304\233jovice", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "\304\214esk\303\275 Krumlov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Cheb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Chomutov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Chrudim", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "D\304\233\304\215\303\255n", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Doma\305\276lice", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Fr\303\275dek - M\303\255stek", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Havl\303\255\304\215k\305\257v Brod", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Hlavn\303\255 m\304\233sto Praha", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Hodon\303\255n", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Hradec Kr\303\241lov\303\251", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Jablonec nad Nisou", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Jesen\303\255k", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Ji\304\215\303\255n", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Jihlava", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Jind\305\231ich\305\257v Hradec", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Karlovy Vary", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Karvin\303\241", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Kladno", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Klatovy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Kol\303\255n", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Krom\304\233\305\231\303\255\305\276", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Kutn\303\241 Hora", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Liberec", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Litom\304\233\305\231ice", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Louny", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "M\304\233ln\303\255k", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Mlad\303\241 Boleslav", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Most", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "N\303\241chod", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Nov\303\275 Ji\304\215\303\255n", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Nymburk", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Olomouc", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Opava", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Ostrava - m\304\233sto", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Pardubice", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Pelh\305\231imov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "P\303\255sek", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Plze\305\210 - jih", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Plze\305\210 - m\304\233sto", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Plze\305\210 - sever", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Prachatice", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Praha - v\303\275chod", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Praha - z\303\241pad", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "P\305\231erov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "P\305\231\303\255bram", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Prost\304\233jov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Rakovn\303\255k", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Rokycany", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Rychnov nad Kn\304\233\305\276nou", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Sokolov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Strakonice", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "\305\240umperk", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Svitavy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "T\303\241bor", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Tachov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Teplice", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "T\305\231eb\303\255\304\215", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Trutnov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Uhersk\303\251 Hradi\305\241t\304\233", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "\303\232st\303\255 nad Labem", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "\303\232st\303\255 nad Orlic\303\255", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Vset\303\255n", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Vy\305\241kov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "\305\275\304\217\303\241r nad S\303\241zavou", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Zl\303\255n", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Znojmo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Nespecifikov\303\241no", 0, QApplication::UnicodeUTF8)
        );
        cbv_obdobi->clear();
        cbv_obdobi->insertItems(0, QStringList()
         << QApplication::translate("pridej_zaznam", "- - - - - - - - - - ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "p\305\231ed 1945", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "1945 - 1950", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "1950 - 1960", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "1960 - 1970", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "1970 - 1980", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "1980 - 1990", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "1990 - 2000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "po 2000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "postupn\304\233 po 1945", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "nespecifikov\303\241no", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Nov\303\275", 0, QApplication::UnicodeUTF8)
        );
        cbv_stav->clear();
        cbv_stav->insertItems(0, QStringList()
         << QApplication::translate("pridej_zaznam", "- - - - - - - - - -", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Zcela zni\304\215ena", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "\304\214\303\241ste\304\215n\304\233 zni\304\215ena", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Ohro\305\276ena", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Nespecifikov\303\241no", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("pridej_zaznam", "Text:", 0, QApplication::UnicodeUTF8));
        label_1->setText(QApplication::translate("pridej_zaznam", "N\303\241zev :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("pridej_zaznam", "Zp\305\257sob z\303\241niku:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("pridej_zaznam", "Okres:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("pridej_zaznam", "Obdob\303\255 z\303\241niku:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("pridej_zaznam", "Stav", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pridej_zaznam", "Zem\304\233pisn\303\241 \305\241\303\255\305\231ka:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("pridej_zaznam", "Zem\304\233pisn\303\241 d\303\251lka:", 0, QApplication::UnicodeUTF8));
        pbv_vlozit->setText(QApplication::translate("pridej_zaznam", "Vlo\305\276", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("pridej_zaznam", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pridej_zaznam: public Ui_pridej_zaznam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIDEJ_ZAZNAM_H
