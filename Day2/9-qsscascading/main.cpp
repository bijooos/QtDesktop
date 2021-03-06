/*************************************************************************
	 *
	 * Discription : A template code for Lab
	 * Author      : Biju
	 * Company     : Emertxe info tech
	 *
 *************************************************************************/

#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *top = new QWidget;
    QHBoxLayout *layout = new QHBoxLayout(top);

    QPushButton *button = new QPushButton("Hello");
    layout->addWidget(button);

    top->show();

    QPushButton *button2 = new QPushButton("Hello 2");
    button2->show();

    qApp->setStyleSheet("* { color:red; }");
    top->setStyleSheet("QPushButton { color:blue; }");
    button->setStyleSheet("* { color:green; }");

    // Notice how the color is used from button's style rather than from its parent
    // even though the parent has a more specific selector.
    return app.exec();
}
