/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../QtTcpClientProducer/mainwindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[8];
    char stringdata5[11];
    char stringdata6[13];
    char stringdata7[6];
    char stringdata8[25];
    char stringdata9[6];
    char stringdata10[25];
    char stringdata11[27];
    char stringdata12[19];
    char stringdata13[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 9),  // "stop_temp"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 10),  // "start_temp"
        QT_MOC_LITERAL(33, 7),  // "putData"
        QT_MOC_LITERAL(41, 10),  // "timerEvent"
        QT_MOC_LITERAL(52, 12),  // "QTimerEvent*"
        QT_MOC_LITERAL(65, 5),  // "event"
        QT_MOC_LITERAL(71, 24),  // "on_barraMin_valueChanged"
        QT_MOC_LITERAL(96, 5),  // "value"
        QT_MOC_LITERAL(102, 24),  // "on_barraMax_valueChanged"
        QT_MOC_LITERAL(127, 26),  // "on_barraTimer_valueChanged"
        QT_MOC_LITERAL(154, 18),  // "on_connect_clicked"
        QT_MOC_LITERAL(173, 21)   // "on_disconnect_clicked"
    },
    "MainWindow",
    "stop_temp",
    "",
    "start_temp",
    "putData",
    "timerEvent",
    "QTimerEvent*",
    "event",
    "on_barraMin_valueChanged",
    "value",
    "on_barraMax_valueChanged",
    "on_barraTimer_valueChanged",
    "on_connect_clicked",
    "on_disconnect_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    0,   69,    2, 0x0a,    2 /* Public */,
       4,    0,   70,    2, 0x0a,    3 /* Public */,
       5,    1,   71,    2, 0x0a,    4 /* Public */,
       8,    1,   74,    2, 0x08,    6 /* Private */,
      10,    1,   77,    2, 0x08,    8 /* Private */,
      11,    1,   80,    2, 0x08,   10 /* Private */,
      12,    0,   83,    2, 0x08,   12 /* Private */,
      13,    0,   84,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'stop_temp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'start_temp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'putData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'timerEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTimerEvent *, std::false_type>,
        // method 'on_barraMin_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_barraMax_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_barraTimer_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_connect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_disconnect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->stop_temp(); break;
        case 1: _t->start_temp(); break;
        case 2: _t->putData(); break;
        case 3: _t->timerEvent((*reinterpret_cast< std::add_pointer_t<QTimerEvent*>>(_a[1]))); break;
        case 4: _t->on_barraMin_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_barraMax_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_barraTimer_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_connect_clicked(); break;
        case 8: _t->on_disconnect_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
