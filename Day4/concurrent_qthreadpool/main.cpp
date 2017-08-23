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
#include <QThreadPool>
#include <QRunnable>
#include <QApplication>

class Work : public QRunnable
{
public:
    void run()
    {
        qDebug() << "Hello from thread " << QThread::currentThread();
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    Work work;
    work.setAutoDelete(false);
    QThreadPool *threadPool = QThreadPool::globalInstance();
    threadPool->start(&work);
    qDebug() << "hello from GUI thread " << QThread::currentThread();
    threadPool->waitForDone();
    return 0;
}
