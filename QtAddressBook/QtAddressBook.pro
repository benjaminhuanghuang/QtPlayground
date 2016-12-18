#-------------------------------------------------
#
# Project created by QtCreator 2016-12-17T20:30:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtAddressBook
TEMPLATE = app

#CONFIG += c++11

SOURCES += main.cpp\
    addressbookentry.cpp \
    mainwindow.cpp \
    addressbook.cpp \
    addressbookcontroller.cpp

HEADERS  += \
    addressbookentry.h \
    mainwindow.h \
    addressbook.h \
    addressbookcontroller.h

FORMS    += mainwindow.ui
