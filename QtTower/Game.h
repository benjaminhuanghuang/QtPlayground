#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QMouseEvent>


class Game : public QGraphicsView
{
  public:
    Game(QWidget *parent=0);
    QGraphicsScene * scene;

    void mousePressEvent(QMouseEvent *event);
};

#endif // GAME_H
