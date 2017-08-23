/*************************************************************************
 *
 * Discription : A simple "Hello world" project
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/

#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QPushButton button("Hello world");
    button.show();
    return app.exec();
}
