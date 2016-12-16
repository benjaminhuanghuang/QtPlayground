#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsRectItem>
#include <QObject>

class Bullet : public QObjecty, QGraphicsRectItem
{
    Q_OBJECT
  public:
    Bullet();

  public slots:
    void move();
};

#endif // BULLET_H
