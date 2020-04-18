/****************************************************************************
** Meta object code from reading C++ file 'notepad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Projcet/notepad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notepad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NotePad_t {
    QByteArrayData data[10];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NotePad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NotePad_t qt_meta_stringdata_NotePad = {
    {
QT_MOC_LITERAL(0, 0, 7), // "NotePad"
QT_MOC_LITERAL(1, 8, 26), // "on_DirectoryButton_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 25), // "on_FileOpenButton_clicked"
QT_MOC_LITERAL(4, 62, 25), // "on_FileSaveButton_clicked"
QT_MOC_LITERAL(5, 88, 21), // "on_ExitButton_clicked"
QT_MOC_LITERAL(6, 110, 27), // "on_listWidget_doubleClicked"
QT_MOC_LITERAL(7, 138, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 150, 5), // "index"
QT_MOC_LITERAL(9, 156, 20) // "on_newButton_clicked"

    },
    "NotePad\0on_DirectoryButton_clicked\0\0"
    "on_FileOpenButton_clicked\0"
    "on_FileSaveButton_clicked\0"
    "on_ExitButton_clicked\0on_listWidget_doubleClicked\0"
    "QModelIndex\0index\0on_newButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NotePad[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void NotePad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NotePad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_DirectoryButton_clicked(); break;
        case 1: _t->on_FileOpenButton_clicked(); break;
        case 2: _t->on_FileSaveButton_clicked(); break;
        case 3: _t->on_ExitButton_clicked(); break;
        case 4: _t->on_listWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_newButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NotePad::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_NotePad.data,
    qt_meta_data_NotePad,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NotePad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotePad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NotePad.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int NotePad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
