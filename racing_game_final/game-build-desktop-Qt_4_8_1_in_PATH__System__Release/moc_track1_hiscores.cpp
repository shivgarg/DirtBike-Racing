/****************************************************************************
** Meta object code from reading C++ file 'track1_hiscores.h'
**
** Created: Sun Sep 8 11:14:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../game/track1_hiscores.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'track1_hiscores.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Track1_HiScores[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      41,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Track1_HiScores[] = {
    "Track1_HiScores\0\0on_pushButton_clicked()\0"
    "showHighScores()\0"
};

void Track1_HiScores::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Track1_HiScores *_t = static_cast<Track1_HiScores *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->showHighScores(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Track1_HiScores::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Track1_HiScores::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Track1_HiScores,
      qt_meta_data_Track1_HiScores, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Track1_HiScores::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Track1_HiScores::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Track1_HiScores::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Track1_HiScores))
        return static_cast<void*>(const_cast< Track1_HiScores*>(this));
    return QWidget::qt_metacast(_clname);
}

int Track1_HiScores::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
