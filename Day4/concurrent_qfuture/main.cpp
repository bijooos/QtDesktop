/*************************************************************************
*
* 	Discription : A Demo code for Lab
* 	Author      : Biju
* 	Company     : Emertxe info tech
*
 *************************************************************************/
#include <QDebug>
#include <QThread>
#include <QString>
#include <qtconcurrentrun.h>
#include <QApplication>

using namespace QtConcurrent;

void hello(QString name)
{
    qDebug() << "Hello" << name << "from" << QThread::currentThread();
}

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QFuture<void> f1 = run(hello, QString("Alice"));
    QFuture<void> f2 = run(hello, QString("Bob"));
    f1.waitForFinished();
    f2.waitForFinished();
}
