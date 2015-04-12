#-------------------------------------------------
#
# Project created by QtCreator 2015-03-17T20:35:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = autogreen_design
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    systemconfiguration.cpp \
    dialoge_mailconfig.cpp \
    dialog_hardwaresettings.cpp \
    dialog_datetime.cpp \
    dialog_noteifictions.cpp \
    dialog_historik.cpp

HEADERS  += mainwindow.h \
    systemconfiguration.h \
    dialoge_mailconfig.h \
    dialog_hardwaresettings.h \
    dialog_datetime.h \
    dialog_noteifictions.h \
    dialog_historik.h

FORMS    += mainwindow.ui \
    dialoge_mailconfig.ui \
    dialoge_systemconfiguration.ui \
    dialog_hardwaresettings.ui \
    dialog_datetime.ui \
    dialog_noteifictions.ui \
    dialog_historik.ui
