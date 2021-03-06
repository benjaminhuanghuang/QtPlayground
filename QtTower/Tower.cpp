#include <QPixmap>
#include <QVector>
#include <QPointF>
#include <QPolygonF>
#include <QTimer>
#include "Tower.h"
#include "Bullet.h"
#include "Game.h"

extern Game *game;

Tower::Tower(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/images/tower.png"));
    // list of points :(1,0) (2,0) (3,1) (3,2) (2,3) (1,3) (0,2) (0,1)
    QVector<QPointF> points;
    points << QPoint(1,0) << QPoint(2,0) << QPoint(3,1) << QPoint(3,2) 
           << QPoint(2,3) << QPoint(1,3) << QPoint(0,2) << QPoint(0,1);

    int SCALE_FACTOR = 40;       
    for (size_t i =0 ,n = points.size(); i<n; i++ )
    {
        points[i] *= SCALE_FACTOR;
    }
    QPolygonF polygon(points);

    attack_area = new QGraphicsPolygonItem(polygon, this);

    //move the polygon
    QPointF poly_center(1.5, 1.5);
    poly_center *= SCALE_FACTOR;
    poly_center = mapToScene(poly_center);
    QPointF tower_center(x() +44, y()+44);
    QLineF ln(poly_center, tower_center);
    attack_area ->setPos(x()+ln.dx(), y()+ln.dy());

    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(time()), this, SLOT(attack_target()));
    timer->start(1000);

    attack_dest = QPointF(800,0);
}

void Tower::attack_target()
{
    Bullet *bullet = new Bullet();
    bullet->setPos(x()+44, y()+44);

    QLineF ln(QPointF(x()+44, y()+44), attack_dest);
    int angle = -1* ln.angle();  //anti-clockwise
    bullet->setRotation(angle);
    game->scene->addItem(bullet);
}
