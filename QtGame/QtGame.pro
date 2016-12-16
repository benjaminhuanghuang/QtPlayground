#-------------------------------------------------
#
# Project created by QtCreator 2016-12-15T21:35:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtGame
TEMPLATE = app


SOURCES += main.cpp\
    MyRect.cpp \
    Bullet.cpp \
    Enemy.cpp \
    Game.cpp \
    Health.cpp \
    Score.cpp

HEADERS  += \
    MyRect.h \
    Bullet.h \
    Enemy.h \
    Game.h \
    Health.h \
    Score.h

FORMS    +=

RESOURCES += \
    res.qrc
