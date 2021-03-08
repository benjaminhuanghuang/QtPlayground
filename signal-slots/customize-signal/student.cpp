#include <QDebug>
#include "student.h"

Student::Student(QObject *parent) : QObject(parent){

}


void Student:: treat(){
    qDebug() << "treat";
}