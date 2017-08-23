/*************************************************************************
 *
 * Discription : A Demo code for event handling 
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/

#include <QApplication>
#include "widget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Widget window;
    window.show();
    return app.exec();
}
