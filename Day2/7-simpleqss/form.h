#ifndef FORM_H
#define FORM_H

#include <QWidget>

class form : public QWidget
{
    Q_OBJECT
public:
    explicit form(QWidget *parent = 0);

signals:

public slots:
     void changeStyle(int which);
};

#endif // FORM_H
