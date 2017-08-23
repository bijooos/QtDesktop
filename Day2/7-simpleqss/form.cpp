#include "form.h"
#include "ui_form.h"
#include <QStyleFactory>
#include <QDebug>
form::form(QWidget *parent) : QWidget(parent)
{
    Ui_Form *ui = new Ui_Form;
    ui->setupUi(this);
    /* Globally changing stylesheet of all QLineEdit objects */
    qApp->setStyleSheet("QLineEdit { background: red; color: white; }");

    /* Only change for paticular object */
    ui->age->setStyleSheet("QLineEdit {background: blue; }");

    connect(ui->style, SIGNAL(activated(int)), this, SLOT(changeStyle(int)));

    /* Getting all possble style keys */
    qDebug() <<QStyleFactory::keys();
    ui->pushButton->setCheckable(true);
}

void form::changeStyle(int which)
{
    switch (which)
    {
    case 0: qApp->setStyle(QStyleFactory::create("windows"));   break;
    case 1: qApp->setStyle(QStyleFactory::create("fusion"));     break;
    case 2: qApp->setStyle(QStyleFactory::create("WindowsXP")); break;
    }

}
