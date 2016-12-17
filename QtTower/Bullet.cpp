#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <qmath.h>  // qSin, qCos, qTan,

#include "Bullet.h"

Bullet::Bullet(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent)
{
    // draw graphics
    setPixmap(QPixmap(":/images/images/bullet.png"));

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(50);
}
void Bullet::move()
{
    // if bullet collides with enemy,m destory both
//    QList<QGraphicsItem*> colliding_items = collidingItems();
//    for(int i =0 , n = colliding_items.size(); i<n; ++i)
//    {
//        if(typeid(*(colliding_items[i])) == typeid(Enemy))
//        {
//            game->score->increase();
            
//            scene()->removeItem(colliding_items[i]);
//            delete colliding_items[i];
            
//            scene()->removeItem(this);
//            delete this;
//            return;
//        }
//    }

    int STEP_SIZE = 30;
    double angle = rotation();    //degrees

    double dy = STEP_SIZE * qSin(qDegreesToRadians(angle));
    double dx = STEP_SIZE * qCos(qDegreesToRadians(angle));

    setPos(x()+dx, y()+dy);
}
