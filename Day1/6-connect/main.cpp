/*************************************************************************
 *
 * Discription : A demo project to connect two QObjects
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/

#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;

    QSlider *slider = new QSlider(Qt::Horizontal);
    slider->setRange(0, 100);

    QProgressBar *bar = new QProgressBar;

    QObject::connect(slider, SIGNAL(valueChanged(int)), bar, SLOT(setValue(int)));

    // slider and progress bar are connected, change will be propagated to progress bar
    slider->setValue(40);

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(slider);
    layout->addWidget(bar);
    window->setLayout(layout);
    window->show();

    return app.exec();
}
