#include <QTimer>
#include <QGraphicsScene>

#include "Game.h"
#include "Tower.h"

Game::Game(QWidget *parent)
{
    // Create scene
    scene = new QGraphicsScene(this);
    setScene(scene);

    //
    Tower *t = new Tower();
    scene->addItem(t);

    setFixedSize(800, 600);
}
