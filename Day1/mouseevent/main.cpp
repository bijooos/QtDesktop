#include <QtWidgets>
#include "eventtest.h"
int main(int argc, char **argv)
{
    QApplication a(argc, argv);

    eventtest myevent;
    myevent.resize(150,150);
    myevent.show();
    return a.exec();
}
