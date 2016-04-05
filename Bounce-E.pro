#-------------------------------------------------
#
# Project created by QtCreator 2016-04-04T15:21:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Bounce-E
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog_optionsform.cpp \
    dialog_options.cpp

HEADERS  += mainwindow.h \
    dialog_optionsform.h \
    dialog_options.h

FORMS    += mainwindow.ui \
    dialog_options.ui
