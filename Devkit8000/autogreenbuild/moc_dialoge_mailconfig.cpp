/****************************************************************************
** Meta object code from reading C++ file 'dialoge_mailconfig.h'
**
** Created: Mon May 4 15:10:04 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialoge_mailconfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialoge_mailconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dialoge_mailconfig[] = {

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
      20,   19,   19,   19, 0x08,
      40,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_dialoge_mailconfig[] = {
    "dialoge_mailconfig\0\0on_btn_ok_clicked()\0"
    "on_btn_back_clicked()\0"
};

void dialoge_mailconfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        dialoge_mailconfig *_t = static_cast<dialoge_mailconfig *>(_o);
        switch (_id) {
        case 0: _t->on_btn_ok_clicked(); break;
        case 1: _t->on_btn_back_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData dialoge_mailconfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject dialoge_mailconfig::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dialoge_mailconfig,
      qt_meta_data_dialoge_mailconfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dialoge_mailconfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dialoge_mailconfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dialoge_mailconfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dialoge_mailconfig))
        return static_cast<void*>(const_cast< dialoge_mailconfig*>(this));
    return QDialog::qt_metacast(_clname);
}

int dialoge_mailconfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
