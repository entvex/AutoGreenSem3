/****************************************************************************
** Meta object code from reading C++ file 'dialog_drivhus.h'
**
** Created: Wed May 13 15:49:42 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialog_drivhus.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_drivhus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog_drivhus[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      38,   15,   15,   15, 0x08,
      58,   15,   15,   15, 0x08,
      79,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog_drivhus[] = {
    "Dialog_drivhus\0\0on_btn_back_clicked()\0"
    "on_btn_up_clicked()\0on_btn_ned_clicked()\0"
    "on_btn_ok_clicked()\0"
};

void Dialog_drivhus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Dialog_drivhus *_t = static_cast<Dialog_drivhus *>(_o);
        switch (_id) {
        case 0: _t->on_btn_back_clicked(); break;
        case 1: _t->on_btn_up_clicked(); break;
        case 2: _t->on_btn_ned_clicked(); break;
        case 3: _t->on_btn_ok_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Dialog_drivhus::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dialog_drivhus::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog_drivhus,
      qt_meta_data_Dialog_drivhus, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog_drivhus::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog_drivhus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog_drivhus::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_drivhus))
        return static_cast<void*>(const_cast< Dialog_drivhus*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog_drivhus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
