#include <QFont>
#include "Health.h"

Health::Health(QGraphicsItem *parent) : QGraphicsTextItem(parent)
{
    health = 3;

    //Darw the text
    setPlainText(QString("Health: ") + QString::number(health));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times", 16)); //Font name, size
}
void Health::decrease()
{
    health--;
    //Darw the text
    setPlainText(QString("Health: ") + QString::number(health));
}

int Health::getHealth()
{
    return health;
}
