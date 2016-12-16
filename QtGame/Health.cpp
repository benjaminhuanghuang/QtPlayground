#include <QFont>
#include "Score.h"

void Health::Health(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    health = 0;

    //Darw the text
    setPlainText(QString("Health: ") + QString::number(health));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times"), 16); //Font name, size
}
void Health::decrease()
{
    health--;
    //Darw the text
    setPlainText(QString("Health: ") + QString::number(health));
}

void Health::getHealth()
{
    return health;
}
