#include "widget.h"

Widget::Widget(QWidget *parent) : QWidget(parent)
{
  this->zt  = new Teacher(this);
  this->st = new Student(this);


  connect(zt, &Teacher::hungry, st, &Student::treat);

  //

  classIsOver();
}


void Widget:: classIsOver(){
  emit zt->hungry();
}


Widget::~Widget()
{
  //delete ui;
}