/*************************************************************************
*
* 	Discription : A Demo code for Lab
* 	Author      : Biju
* 	Company     : Emertxe info tech
*
 *************************************************************************/

#include <QtWidgets>
#include "mainwindow.h"

int main (int argc, char* argv[]) {
	QApplication app(argc, argv);
	MainWindow *mw = new MainWindow;
	mw->show();
	//if (app.arguments().contains("-testobjects")) {
		mw->createTestObjects();
	// }
	return app.exec();

}
