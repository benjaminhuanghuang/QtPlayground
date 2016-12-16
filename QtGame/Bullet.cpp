#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "Bullet.h"
#include "Enemy.h"
#include "Game.h"

extern Game *game;

Bullet::Bullet(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent)
{
    // draw graphics
    setPixmap(QPixmap(":/images/bullet.png"));

    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(50);
}
void Bullet::move()
{
    // if bullet collides with enemy,m destory both
    QList<QGraphicsItem*> colliding_items = collidingItems();
    for(int i =0 , n = colliding_items.size(); i<n; ++i)
    {
        if(typeid(*(colliding_items[i])) == typeid(Enemy))
        {
            game->score->increase();
            
            scene()->removeItem(colliding_items[i]);
            delete colliding_items[i];
            
            scene()->removeItem(this);
            delete this;
            return;
        }
    }

    setPos(x(), y() - 10);
    if(pos().y() < 0)
    {
        scene()->removeItem(this);
        delete this;
    }
}
