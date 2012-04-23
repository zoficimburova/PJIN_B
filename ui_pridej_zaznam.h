/********************************************************************************
** Form generated from reading UI file 'pridej_zaznam.ui'
**
** Created: Sun Apr 22 13:35:15 2012
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
    QGridLayout *gridLayout_2;
    QLabel *label_1;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *pbv_vlozit;
    QLabel *label_7;
    QPlainTextEdit *pte_popis;
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
    QLineEdit *lev_okres;
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

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 2, 1, 1);

        pte_popis = new QPlainTextEdit(centralwidget);
        pte_popis->setObjectName(QString::fromUtf8("pte_popis"));

        gridLayout_3->addWidget(pte_popis, 1, 2, 2, 1);

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

        lev_okres = new QLineEdit(centralwidget);
        lev_okres->setObjectName(QString::fromUtf8("lev_okres"));
        lev_okres->setEnabled(false);

        gridLayout->addWidget(lev_okres, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 1, 1, 1);

        pridej_zaznam->setCentralWidget(centralwidget);
        label_7->raise();
        pte_popis->raise();
        menubar = new QMenuBar(pridej_zaznam);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 855, 25));
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
        label_1->setText(QApplication::translate("pridej_zaznam", "N\303\241zev :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("pridej_zaznam", "Zp\305\257sob z\303\241niku:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("pridej_zaznam", "Okres:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("pridej_zaznam", "Obdob\303\255 z\303\241niku:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("pridej_zaznam", "Stav", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pridej_zaznam", "Zem\304\233pisn\303\241 \305\241\303\255\305\231ka:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("pridej_zaznam", "Zem\304\233pisn\303\241 d\303\251lka:", 0, QApplication::UnicodeUTF8));
        pbv_vlozit->setText(QApplication::translate("pridej_zaznam", "Vlo\305\276", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("pridej_zaznam", "Text:", 0, QApplication::UnicodeUTF8));
        cbv_zanik->clear();
        cbv_zanik->insertItems(0, QStringList()
         << QApplication::translate("pridej_zaznam", "- - - - - - - - - -", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Nov\303\275", 0, QApplication::UnicodeUTF8)
        );
        cbv_okres->clear();
        cbv_okres->insertItems(0, QStringList()
         << QApplication::translate("pridej_zaznam", "- - - - - - - - - - ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Nov\303\275", 0, QApplication::UnicodeUTF8)
        );
        cbv_obdobi->clear();
        cbv_obdobi->insertItems(0, QStringList()
         << QApplication::translate("pridej_zaznam", "- - - - - - - - - - ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pridej_zaznam", "Nov\303\275", 0, QApplication::UnicodeUTF8)
        );
        cbv_stav->clear();
        cbv_stav->insertItems(0, QStringList()
         << QApplication::translate("pridej_zaznam", "- - - - - - - - - -", 0, QApplication::UnicodeUTF8)
        );
        toolBar->setWindowTitle(QApplication::translate("pridej_zaznam", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pridej_zaznam: public Ui_pridej_zaznam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIDEJ_ZAZNAM_H
