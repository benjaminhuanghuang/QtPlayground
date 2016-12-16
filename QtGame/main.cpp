#include <QApplication>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsView>

#include "MyRect.h"



int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    QGraphicsScene *scene = new QGraphicsScene();

//    QGraphicsRectItem *rect = new QGraphicsRectItem();

    MyRect * rect = new MyRect();
    rect->setRect(0,0,100,100);

    scene->addItem(rect);
    rect->setFlag(QGraphicsItem::ItemIsFocusable);

    QGraphicsView *view = new QGraphicsView(scene);
    view->show();

    return a.exec();
}
