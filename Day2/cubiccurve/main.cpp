#include <QtWidgets>
#include "window.h"
int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    window *board = new window;

    board->resize(100,100);
    board->show();
    return app.exec();
}
