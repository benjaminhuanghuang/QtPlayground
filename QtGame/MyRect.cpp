#include "MyRect.h"
#include <QDebug>

void MyRect::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "MyRect know the key press";
    if (event->key() == Qt::Key_Left)
    {
        if (pos().x() > 0)
            setPost(x() - 10, y());
    }
    else if (event->key() == Qt::Key_Right)
    {
        if (pos().x() + 100 < 800)
            setPost(x() + 10, y());
    }
    else if (event->key() == Qt::Key_Space)
    {
        Bullet *bullet = new Bullet();
        qDebug() << "Bullet created.";
        bullet->setPos(x(), y());
        scene()->addItem(bullet);
    }
}

void MyRect::spawn()
{
    Enemy *enemy = new Enemy();
    scene()->addItem(enemy);
}
