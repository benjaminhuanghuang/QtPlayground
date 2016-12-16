#include <QFont>
#include "Score.h"

void Score::Score(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    score = 0;

    //Darw the text
    setPlainText(QString("Score: ") + QString::number(score));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times"), 16); //Font name, size
}
void Score::increase()
{
    score++;
    //Darw the text
    setPlainText(QString("Score: ") + QString::number(score));
}

void Score::getScore()
{
    return score;
}
