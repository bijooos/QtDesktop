/*************************************************************************
 *
 * Discription : A demo project for custom slots
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/

#include <QtWidgets>
#include "stopwatch.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    StopWatch *watch = new StopWatch;
    watch->show();

    return app.exec();
}
