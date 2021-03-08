#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class Teacher : public QObject
{
    Q_OBJECT

public:
    explicit Teacher(QObject *parent = 0);

signals:
    // 只需要声明，不需要实现
    // void
    void hungry();
};
#endif