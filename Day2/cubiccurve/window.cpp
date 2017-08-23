#include <QtWidgets>
#include "window.h"

window::window(QWidget *parent) : QWidget(parent)
{

}

void window::paintEvent(QPaintEvent *evnt)
{
    QPainterPath path;
    //path.addRect(10,10,80,80);


    path.cubicTo(100, 0, 50, 50, 100, 100);
    path.moveTo(0,0);
    path.cubicTo(0, 100, 50, 50, 100, 100);

    QPainter painter(this);
    painter.drawPoint(100, 0);
    painter.drawPoint(50, 50);
    painter.drawPoint(100, 100);

    painter.drawPath(path);

}
