#ifndef EVENTTEST_H
#define EVENTTEST_H

#include <QWidget>

class eventtest:public QWidget
{
    Q_OBJECT
public:
    eventtest();
protected:
    void mousePressEvent(QMouseEvent *event);
signals:
    void clicked(QString);
};

#endif // EVENTTEST_H
