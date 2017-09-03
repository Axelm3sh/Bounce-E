#-------------------------------------------------
#
# Project created by QtCreator 2016-04-04T15:21:47
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Bounce-E
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog_options.cpp \
    dialog_guestlist.cpp \
    guestobject.cpp

HEADERS  += mainwindow.h \
    dialog_options.h \
    dialog_guestlist.h \
    guestobject.h

FORMS    += mainwindow.ui \
    dialog_options.ui \
    dialog_guestlist.ui

RESOURCES += \
    stylesresources.qrc \
    iconimgresources.qrc
