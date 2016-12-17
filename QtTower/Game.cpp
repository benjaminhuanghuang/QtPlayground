#include <QTimer>
#include <QGraphicsScene>
#include "Game.h"
#include "Tower.h"
#include "Bullet.h"


Game::Game(QWidget *parent)
{
    // Create scene (the whole map of the game)
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0, 0, 800, 600);
    setScene(scene);

    //
    Tower *t = new Tower();
    t->setPos(250,250);
    scene->addItem(t);

    setFixedSize(800, 600);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

void Game::mousePressEvent(QMouseEvent *event)
{
    Bullet * bullet = new Bullet();
    bullet->setPos(event->pos());
    bullet->setRotation(40);   //clockwise
    scene->addItem(bullet);
}
