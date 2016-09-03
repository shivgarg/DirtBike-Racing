/****************************************************************************
** Meta object code from reading C++ file 'newgame.h'
**
** Created: Mon Sep 16 12:35:04 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../game/newgame.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newgame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_newgame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      36,    8,    8,    8, 0x08,
      60,    8,    8,    8, 0x08,
      86,    8,    8,    8, 0x08,
     112,    8,    8,    8, 0x08,
     138,    8,    8,    8, 0x08,
     164,    8,    8,    8, 0x08,
     190,    8,    8,    8, 0x08,
     216,    8,    8,    8, 0x08,
     242,    8,    8,    8, 0x08,
     268,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_newgame[] = {
    "newgame\0\0on_pushButton_11_clicked()\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_4_clicked()\0"
    "on_pushButton_5_clicked()\0"
    "on_pushButton_6_clicked()\0"
    "on_pushButton_8_clicked()\0"
    "on_pushButton_7_clicked()\0"
    "on_pushButton_9_clicked()\0"
    "on_pushButton_10_clicked()\0"
};

void newgame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        newgame *_t = static_cast<newgame *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_11_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_pushButton_4_clicked(); break;
        case 5: _t->on_pushButton_5_clicked(); break;
        case 6: _t->on_pushButton_6_clicked(); break;
        case 7: _t->on_pushButton_8_clicked(); break;
        case 8: _t->on_pushButton_7_clicked(); break;
        case 9: _t->on_pushButton_9_clicked(); break;
        case 10: _t->on_pushButton_10_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData newgame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject newgame::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_newgame,
      qt_meta_data_newgame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &newgame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *newgame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *newgame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_newgame))
        return static_cast<void*>(const_cast< newgame*>(this));
    return QWidget::qt_metacast(_clname);
}

int newgame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
