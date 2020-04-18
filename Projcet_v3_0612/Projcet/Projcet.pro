#-------------------------------------------------
#
# Project created by QtCreator 2019-05-24T09:44:15
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projcet
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    calendar.cpp \
        ex.cpp \
        gamble.cpp \
    img.cpp \
        main.cpp \
        mainwindow.cpp \
        notepad.cpp \
        teaminfo.cpp\ \
    timetable.cpp

HEADERS += \
    calendar.h \
        ex.h \
        gamble.h \
    img.h \
        mainwindow.h \
        notepad.h \
        teaminfo.h\ \
    timetable.h

FORMS += \
    calendar.ui \
        ex.ui \
        gamble.ui \
        mainwindow.ui \
        notepad.ui \
        teaminfo.ui\

INCLUDEPATH += C:\opencv\newBuild\install\include

LIBS += C:\opencv\newBuild\bin\libopencv_core410.dll
LIBS += C:\opencv\newBuild\bin\libopencv_highgui410.dll
LIBS += C:\opencv\newBuild\bin\libopencv_imgcodecs410.dll
LIBS += C:\opencv\newBuild\bin\libopencv_imgproc410.dll
LIBS += C:\opencv\newBuild\bin\libopencv_features2d410.dll
LIBS += C:\opencv\newBuild\bin\libopencv_calib3d410.dll

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
