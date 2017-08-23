/*************************************************************************
 *
 * Discription : A demo project for custom slots
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/

#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <QLabel>

class StopWatch : public QLabel
{
    Q_OBJECT

public:
    StopWatch(QWidget *parent = 0);

protected slots:
    void shot();

private:
    int m_secs;
};

#endif
