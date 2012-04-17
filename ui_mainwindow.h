/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Apr 16 15:35:52 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Konec;
    QAction *action_Nov;
    QAction *action_Pripoj_databazi;
    QAction *action_Export_databaze;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QTableView *tableView;
    QTextEdit *textEdit;
    QTableView *tableView_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *cb_obdobi;
    QComboBox *cb_okresy;
    QComboBox *cb_zpusob;
    QComboBox *cb_stav;
    QMenuBar *menuBar;
    QMenu *menu_Soubor;
    QMenu *menu_Vlo_it;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 470);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        action_Konec = new QAction(MainWindow);
        action_Konec->setObjectName(QString::fromUtf8("action_Konec"));
        action_Nov = new QAction(MainWindow);
        action_Nov->setObjectName(QString::fromUtf8("action_Nov"));
        action_Pripoj_databazi = new QAction(MainWindow);
        action_Pripoj_databazi->setObjectName(QString::fromUtf8("action_Pripoj_databazi"));
        action_Export_databaze = new QAction(MainWindow);
        action_Export_databaze->setObjectName(QString::fromUtf8("action_Export_databaze"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setOrientation(Qt::Horizontal);
        tableView = new QTableView(splitter);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy2);
        tableView->setMinimumSize(QSize(0, 0));
        splitter->addWidget(tableView);
        textEdit = new QTextEdit(splitter);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(false);
        splitter->addWidget(textEdit);

        gridLayout->addWidget(splitter, 0, 0, 1, 4);

        tableView_2 = new QTableView(centralWidget);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setMinimumSize(QSize(0, 0));
        tableView_2->setMaximumSize(QSize(16777215, 57));

        gridLayout->addWidget(tableView_2, 1, 0, 1, 4);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 2, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 3, 1, 1);

        cb_obdobi = new QComboBox(centralWidget);
        cb_obdobi->setObjectName(QString::fromUtf8("cb_obdobi"));
        cb_obdobi->setEnabled(false);

        gridLayout->addWidget(cb_obdobi, 3, 0, 1, 1);

        cb_okresy = new QComboBox(centralWidget);
        cb_okresy->setObjectName(QString::fromUtf8("cb_okresy"));
        cb_okresy->setEnabled(false);

        gridLayout->addWidget(cb_okresy, 3, 1, 1, 1);

        cb_zpusob = new QComboBox(centralWidget);
        cb_zpusob->setObjectName(QString::fromUtf8("cb_zpusob"));
        cb_zpusob->setEnabled(false);

        gridLayout->addWidget(cb_zpusob, 3, 2, 1, 1);

        cb_stav = new QComboBox(centralWidget);
        cb_stav->setObjectName(QString::fromUtf8("cb_stav"));
        cb_stav->setEnabled(false);

        gridLayout->addWidget(cb_stav, 3, 3, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 27));
        menu_Soubor = new QMenu(menuBar);
        menu_Soubor->setObjectName(QString::fromUtf8("menu_Soubor"));
        menu_Vlo_it = new QMenu(menuBar);
        menu_Vlo_it->setObjectName(QString::fromUtf8("menu_Vlo_it"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu_Soubor->menuAction());
        menuBar->addAction(menu_Vlo_it->menuAction());
        menu_Soubor->addAction(action_Pripoj_databazi);
        menu_Soubor->addAction(action_Export_databaze);
        menu_Soubor->addAction(action_Konec);
        menu_Vlo_it->addAction(action_Nov);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_Konec->setText(QApplication::translate("MainWindow", "&Konec", 0, QApplication::UnicodeUTF8));
        action_Konec->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        action_Nov->setText(QApplication::translate("MainWindow", "&Nov\303\275", 0, QApplication::UnicodeUTF8));
        action_Nov->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        action_Pripoj_databazi->setText(QApplication::translate("MainWindow", "&Pripoj databazi", 0, QApplication::UnicodeUTF8));
        action_Export_databaze->setText(QApplication::translate("MainWindow", "&Export databaze", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Obdob\303\255 z\303\241niku", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Okres", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Zp\305\257sob z\303\241niku", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Stav", 0, QApplication::UnicodeUTF8));
        cb_obdobi->clear();
        cb_obdobi->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "- - - - - - - - - -", 0, QApplication::UnicodeUTF8)
        );
        cb_okresy->clear();
        cb_okresy->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "- - - - - - - - - -", 0, QApplication::UnicodeUTF8)
        );
        cb_zpusob->clear();
        cb_zpusob->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "- - - - - - - - - -", 0, QApplication::UnicodeUTF8)
        );
        cb_stav->clear();
        cb_stav->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "- - - - - - - - - -", 0, QApplication::UnicodeUTF8)
        );
        menu_Soubor->setTitle(QApplication::translate("MainWindow", "&Soubor", 0, QApplication::UnicodeUTF8));
        menu_Vlo_it->setTitle(QApplication::translate("MainWindow", "&Vlo\305\276it", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
