#-------------------------------------------------
#
# Project created by QtCreator 2016-01-03T13:41:22
#
#-------------------------------------------------

QT       += core gui

CONFIG   += C++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GetOwned
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    lineupsoverview.cpp \
    player.cpp \
    lineup.cpp

HEADERS  += mainwindow.h \
    lineupsoverview.h \
    player.h \
    lineup.h

FORMS    += mainwindow.ui

RESOURCES += \
    style.qrc

DISTFILES +=
