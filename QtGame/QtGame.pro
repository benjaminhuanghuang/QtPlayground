#-------------------------------------------------
#
# Project created by QtCreator 2016-12-15T21:35:04
#
#-------------------------------------------------

QT       += core gui \
            multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtGame
TEMPLATE = app


SOURCES += main.cpp\
    Bullet.cpp \
    Enemy.cpp \
    Game.cpp \
    Health.cpp \
    Score.cpp \
    Player.cpp

HEADERS  += \
    MyRect.h \
    Bullet.h \
    Enemy.h \
    Game.h \
    Health.h \
    Score.h \
    Player.h

FORMS    +=

RESOURCES += \
    res.qrc
