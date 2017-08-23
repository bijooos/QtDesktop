/*************************************************************************
 *
 * Discription : A Demo code for event handling 
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/

#include <QtWidgets>
#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Close Event [*]");
    setWindowModified(true);

    QLabel *label = new QLabel("Try to close the window.");
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label, 0, Qt::AlignCenter);
    setLayout(layout);
}

void Widget::closeEvent(QCloseEvent *event)
{
    if (windowShouldClose())
        event->accept();
    else
        event->ignore();
}

bool Widget::windowShouldClose()
{
    if (!isWindowModified())
        return true;

    QMessageBox::StandardButton answer =
        QMessageBox::question(
            this,
            "Close Window",
            "Really close the window?",
            QMessageBox::Yes | QMessageBox::No
        );

    return (answer == QMessageBox::Yes);
}
