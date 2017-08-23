#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout;
    /* Sliders */
    QSlider *slider = new QSlider(Qt::Horizontal, window);
    /* Setting range for slider */
    slider->setRange(0,99);
    /* Setting initial calue for slider */
    slider->setValue(0);

    /* Progress bar */
    QProgressBar *progress = new QProgressBar(window);
    progress->setRange(0,150);
    progress->setValue(0);
    progress->setFormat("%v - %p");

    /* Spin box */
    QSpinBox *spin = new QSpinBox(window);
    spin->setRange(0,99);
    spin->setValue(0);
    spin->setSuffix(" INR");


    /* Adding to layout */
    layout->addWidget(slider);
    layout->addStretch(1);
    layout->addWidget(progress);
    layout->addStretch(1);
    layout->addWidget(spin);

    window->setLayout(layout);
    window->show();

    /* TODO
     * 1. Try to implement this in seperate class.
     * 2. Using signals and slots connect slider and progress bar (When slider value changes, change progressbar)
     * 3. Connect slider and spin box (When slider value changes, change spin box also).
     * 4. connect spin box and slider (When spinr value changes, change slider also). */


    return app.exec();
}
