#include <QPixmap>
#include <QVector>
#include <QPointF>
#include <QPolygonF>

#include "Tower.h"


Tower::Tower(QGraphicsItem *parent)
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
}
