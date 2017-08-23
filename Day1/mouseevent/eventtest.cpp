#include "eventtest.h"
#include <QtWidgets>
eventtest::eventtest()
{
    QLabel *label = new QLabel(this);
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label);
    setLayout(layout);
    connect(this,SIGNAL(clicked(QString)), label, SLOT(setText(QString)));

}
void eventtest::mousePressEvent(QMouseEvent *event)
{
   if (event->button() == Qt::RightButton)
   {
       QMessageBox::information(this, "Mouse event", "Right button pressed",QMessageBox::Ok);
       emit clicked("Right");
   }
   else if(event->button() == Qt::LeftButton)
   {
       QMessageBox::information(this, "Mouse event", "Left button pressed",QMessageBox::Ok);
       emit clicked("Left");
   }
   else
   {
       QMessageBox::information(this, "Mouse event", "Mid button pressed",QMessageBox::Ok);
   }
}
