/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Mon Apr 16 16:29:06 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      40,   11,   11,   11, 0x08,
      59,   56,   51,   11, 0x08,
      91,   56,   11,   11, 0x08,
     133,   11,   11,   11, 0x08,
     159,   11,   11,   11, 0x08,
     197,   11,   11,   11, 0x08,
     241,  235,   11,   11, 0x08,
     265,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_action_Konec_triggered()\0"
    "zobrazit()\0bool\0db\0databaze_existuje(QSqlDatabase)\0"
    "vytvorit_strukturu_databaze(QSqlDatabase)\0"
    "on_action_Nov_triggered()\0"
    "on_action_Pripoj_databazi_triggered()\0"
    "on_action_Export_databaze_triggered()\0"
    "index\0rowChanged(QModelIndex)\0"
    "aktualizuj_cb()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_action_Konec_triggered(); break;
        case 1: zobrazit(); break;
        case 2: { bool _r = databaze_existuje((*reinterpret_cast< QSqlDatabase(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: vytvorit_strukturu_databaze((*reinterpret_cast< QSqlDatabase(*)>(_a[1]))); break;
        case 4: on_action_Nov_triggered(); break;
        case 5: on_action_Pripoj_databazi_triggered(); break;
        case 6: on_action_Export_databaze_triggered(); break;
        case 7: rowChanged((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 8: aktualizuj_cb(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
