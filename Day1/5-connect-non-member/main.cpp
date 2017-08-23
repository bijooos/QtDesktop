/*************************************************************************
 *
 * Discription : A demo project to connect two QObjects with non-member funtion
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/

#include <QtWidgets>
QProgressBar *bar;
static void printValue(int value) {
    qDebug("Value is: %d", value);
    bar->setValue(value);

}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;

    QSlider *slider = new QSlider(Qt::Horizontal);
    slider->setRange(0, 100);

    bar = new QProgressBar;

  //  QObject::connect(slider, SIGNAL(valueChanged(int)), bar, SLOT(setValue(int)));
    QObject::connect( slider, &QSlider::valueChanged, &printValue );

    // slider and progress bar are connected, change will be propagated to progress bar
    slider->setValue(40);

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(slider);
    layout->addWidget(bar);
    window->setLayout(layout);
    window->show();

    return app.exec();
}
