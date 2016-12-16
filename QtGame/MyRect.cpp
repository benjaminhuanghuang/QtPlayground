#include "MyRect.h"
#include <QDebug>

void MyRect::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "MyRect know the key press";
}
