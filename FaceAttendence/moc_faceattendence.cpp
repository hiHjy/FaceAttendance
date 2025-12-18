/****************************************************************************
** Meta object code from reading C++ file 'faceattendence.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "faceattendence.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'faceattendence.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Work_t {
    QByteArrayData data[10];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Work_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Work_t qt_meta_stringdata_Work = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Work"
QT_MOC_LITERAL(1, 5, 12), // "sigFaceReady"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 6), // "base64"
QT_MOC_LITERAL(4, 26, 7), // "cv::Mat"
QT_MOC_LITERAL(5, 34, 5), // "frame"
QT_MOC_LITERAL(6, 40, 12), // "sigFaceTrace"
QT_MOC_LITERAL(7, 53, 1), // "x"
QT_MOC_LITERAL(8, 55, 1), // "y"
QT_MOC_LITERAL(9, 57, 6) // "status"

    },
    "Work\0sigFaceReady\0\0base64\0cv::Mat\0"
    "frame\0sigFaceTrace\0x\0y\0status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Work[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       6,    3,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    7,    8,    9,

       0        // eod
};

void Work::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Work *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigFaceReady((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< cv::Mat(*)>(_a[2]))); break;
        case 1: _t->sigFaceTrace((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Work::*)(QString , cv::Mat );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Work::sigFaceReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Work::*)(int , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Work::sigFaceTrace)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Work::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_Work.data,
    qt_meta_data_Work,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Work::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Work::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Work.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Work::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Work::sigFaceReady(QString _t1, cv::Mat _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Work::sigFaceTrace(int _t1, int _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_FaceAttendence_t {
    QByteArrayData data[8];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FaceAttendence_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FaceAttendence_t qt_meta_stringdata_FaceAttendence = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FaceAttendence"
QT_MOC_LITERAL(1, 15, 15), // "sigFaceVerified"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "UserInfo"
QT_MOC_LITERAL(4, 41, 4), // "user"
QT_MOC_LITERAL(5, 46, 12), // "sigCropReady"
QT_MOC_LITERAL(6, 59, 11), // "sigFaceCrop"
QT_MOC_LITERAL(7, 71, 3) // "img"

    },
    "FaceAttendence\0sigFaceVerified\0\0"
    "UserInfo\0user\0sigCropReady\0sigFaceCrop\0"
    "img"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FaceAttendence[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    0,   32,    2, 0x06 /* Public */,
       6,    1,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,    7,

       0        // eod
};

void FaceAttendence::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FaceAttendence *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigFaceVerified((*reinterpret_cast< UserInfo(*)>(_a[1]))); break;
        case 1: _t->sigCropReady(); break;
        case 2: _t->sigFaceCrop((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FaceAttendence::*)(UserInfo );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FaceAttendence::sigFaceVerified)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FaceAttendence::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FaceAttendence::sigCropReady)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FaceAttendence::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FaceAttendence::sigFaceCrop)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FaceAttendence::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_FaceAttendence.data,
    qt_meta_data_FaceAttendence,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FaceAttendence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FaceAttendence::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FaceAttendence.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FaceAttendence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void FaceAttendence::sigFaceVerified(UserInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FaceAttendence::sigCropReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FaceAttendence::sigFaceCrop(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
