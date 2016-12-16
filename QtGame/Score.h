#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsRectItem>
#include <QObject>

class Score : public QGraphicsTextItem
{
private:
  int score;

public:
  Score(QGraphicsItem *parent = 0);
  void increase();
  void getScore();
};

#endif // SCORE_H
