/*************************************************************************
 *
 * Discription : A demo project to connect two QObjects using function pointers
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
    /* This method will only work in Qt5, Its a modified version of SIGNAL & SLOT macros*/
    QObject::connect(slider, &QSlider::valueChanged, bar, &QProgressBar::setValue);

    /* slider and progress bar are connected, change will be propagated to progress bar */
    slider->setValue(40);

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(slider);
    layout->addWidget(bar);
    window->setLayout(layout);
    window->show();

    return app.exec();
}
