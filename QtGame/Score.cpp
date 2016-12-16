#include <QFont>
#include "Score.h"

Score::Score(QGraphicsItem *parent) : QGraphicsTextItem(parent)
{
    score = 0;

    //Darw the text
    setPlainText(QString("Score: ") + QString::number(score));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times", 16)); //Font name, size
}
void Score::increase()
{
    score++;
    //Darw the text
    setPlainText(QString("Score: ") + QString::number(score));
}

int Score::getScore()
{
    return score;
}
