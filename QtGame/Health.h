#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsRectItem>

class Health : public QGraphicsTextItem
{
private:
  int health;

public:
  Score(QGraphicsItem *parent = 0);
  void decrease();
  void getHealth();
};

#endif // HEALTH_H
