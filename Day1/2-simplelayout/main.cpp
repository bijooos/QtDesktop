/*************************************************************************
 *
 * Discription : A Demo code for layout
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/

#include "simplewindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    SimpleWindow window;
    window.show();

    return app.exec();
}
