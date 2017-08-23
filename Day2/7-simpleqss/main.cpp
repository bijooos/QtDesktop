/*************************************************************************
	 *
	 * Discription : A template code for Lab
	 * Author      : Biju
	 * Company     : Emertxe info tech
	 *
 *************************************************************************/

#include <QtWidgets>
#include <QStyle>
#include "form.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    form widget;
    widget.show();

    qApp->setStyle(QStyleFactory::create("windows"));

    return app.exec();
}


