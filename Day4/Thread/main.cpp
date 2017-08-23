#include <QApplication>
#include <QThread>
#include <QString>
#include <QDebug>
class MyThread : public QThread
{
public:
    // constructor
    // set name using initializer
    explicit MyThread(QString s);

    // overriding the QThread's run() method
    void run();
private:
    QString name;
};

MyThread::MyThread(QString s) : name(s)
{
}

// We overrides the QThread's run() method here
// run() will be called when a thread starts
// the code will be shared by all threads

void MyThread::run()
{
    for(int i = 0; i <= 100; i++)
    {
        qDebug() << this->name << " " << i;
    }
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MyThread thread1("A"), thread2("B"), thread3("C");

    thread1.start();
    thread2.start();
    thread3.start();

    return a.exec();
}
