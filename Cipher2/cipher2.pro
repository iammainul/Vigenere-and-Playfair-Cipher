#-------------------------------------------------
#
# Project created by QtCreator 2016-04-18T20:53:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cipher2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    playfair.cpp \
    vignere.cpp

HEADERS  += mainwindow.h \
    playfair.h \
    vignere.h

FORMS    += mainwindow.ui \
    playfair.ui \
    vignere.ui
