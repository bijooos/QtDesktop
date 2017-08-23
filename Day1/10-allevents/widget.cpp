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
    : QWidget(parent), m_logAll(false)
{
    setWindowTitle(tr("Widget Event Example"));
    setFocusPolicy(Qt::StrongFocus);
}


bool Widget::event(QEvent *event)
{
    if(m_logAll) {
        qDebug() << "Handling all events in event()";
        emit notifyEvent("event", event);
    }
    /* If you do not perform all the necessary work
     *  in your implementation of the virtual function,
     * you may need to call the base class's implementation.*/
    return QWidget::event(event);
}

void Widget::paintEvent(QPaintEvent *event)
{
    emit notifyEvent("paintEvent", event);
    QWidget::paintEvent(event);
}


// input events
void Widget::keyPressEvent(QKeyEvent *event)
{
    emit notifyEvent("keyPressEvent", event);
    QWidget::keyPressEvent(event);
}

void Widget::keyReleaseEvent(QKeyEvent *event)
{
    emit notifyEvent("keyReleaseEvent", event);
    QWidget::keyReleaseEvent(event);
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    emit notifyEvent("mousePressEvent", event);
    QWidget::mousePressEvent(event);
    // for context menus use contextMenuEvent(...)
}

void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    emit notifyEvent("mouseReleaseEvent", event);
    QWidget::mouseReleaseEvent(event);
}

void Widget::mouseDoubleClickEvent(QMouseEvent *event)
{
    emit notifyEvent("mouseDoubleClickEvent", event);
    QWidget::mouseDoubleClickEvent(event);
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{    
    emit notifyEvent("mouseMoveEvent", event);
    QWidget::mouseMoveEvent(event);
}

// focus events
void Widget::focusInEvent(QFocusEvent *event)
{
    emit notifyEvent("focusInEvent", event);
    QWidget::focusInEvent(event);
}

void Widget::focusOutEvent(QFocusEvent *event)
{
    emit notifyEvent("focusOutEvent", event);
    QWidget::focusOutEvent(event);
}

// geometry events
void Widget::resizeEvent(QResizeEvent *event)
{
    emit notifyEvent("resizeEvent", event);
    QWidget::resizeEvent(event);
}

void Widget::hideEvent(QHideEvent *event)
{
    emit notifyEvent("hideEvent", event);
    QWidget::hideEvent(event);
}

void Widget::showEvent(QShowEvent *event)
{
    emit notifyEvent("showEvent", event);
    QWidget::showEvent(event);
}

// other events
void Widget::closeEvent(QCloseEvent *event)
{
    emit notifyEvent("closeEvent", event);
    QWidget::closeEvent(event);

}


void Widget::setLogAll(bool logAll)
{
    m_logAll = logAll;
}
