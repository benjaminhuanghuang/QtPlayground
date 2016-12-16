#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h> //rand()

#include "Enemy.h"
#include "Game.h"

extern Game *game;

void Enemy::Enemy() : QObject(), QGraphicsRectItem()
{
    int random_number = rand() % 700;
    setPos(random_number, 0);
    setRect(0, 0, 10, 50);

    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(50);
}
void Enemy::move()
{
    setPos(x(), y() + 5);
    if (pos().y() > 600)
    {
        game->health->decrease();
        scene()->removeItem(this);
        delete this;
    }
}