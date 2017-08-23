/*************************************************************************
 *
 * Discription : A demo project for custom slots
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/

#include <QtWidgets>
#include "stopwatch.h"

StopWatch::StopWatch(QWidget *parent)
    : QLabel(parent), m_secs(0)
{
    setText("0:00");

    QTimer *timer = new QTimer(this);
    timer->start(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(shot()));
}

void StopWatch::shot()
{
    m_secs += 1;
    QString str;
    str.sprintf( "%d:%02d", m_secs / 60, m_secs % 60 );
    setText( str );
}
