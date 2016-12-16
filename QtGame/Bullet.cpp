#include <QTimer>
#include "Bullet.h"
#include "Enemy.h"

void Bullet::Bullet()
{
    setRect(0, 0, 10, 50);

    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(50);
}
void Bullet::move()
{
    // if bullet collides with enemy,m destory both
    QList<QGraphicsItem> colliding_items = collidingItem();
    for(int i =0 , n = colliding_items.size(); i<n; ++i)
    {
        if(typeid(*(colliding_items[i])) == typeid(Enemy))
        {
            scene()->remvoeItem(colliding_item[i]);
            delete colliding_item[i];
            
            scene()->remvoeItem(this);
            delete this;
            return;
        }
    }

    setPos(x(), y() - 10);
    if(pos().y + rect().height()<0)
    {
        scene()->removeItem(this);
        delete this;
    }
}
