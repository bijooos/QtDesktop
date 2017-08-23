#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    /* Creating a layout for window */
    QVBoxLayout *layout = new QVBoxLayout;

    /*  push button */
    QPushButton *button = new QPushButton(window);
    /* we can set an icon for button using QIcon */
    button->setIcon(QIcon("C:/Users/mkbij/OneDrive/Pictures/qt.png"));

    /* Resizing button & icon size */
    button->setIconSize(QSize(128,128));
    button->setFixedSize(QSize(128,128));
    /* If you want a toggle button enable the checkable option*/
    button->setCheckable(true);

    /* Radio buttons */
    QRadioButton *radio1 = new QRadioButton("Option 1",window);
    QRadioButton *radio2 = new QRadioButton("Option 1",window);

    layout->addWidget(radio1);
    layout->addWidget(radio2);

    /* Check box */

    QCheckBox *check1 = new QCheckBox("Choice 1", window);
    QCheckBox *check2 = new QCheckBox("Choice 2", window);
    QCheckBox *check3 = new QCheckBox("Choice 3", window);
     /* NOTE Group box Refer http://doc.qt.io/qt-5/qtwidgets-widgets-groupbox-example.html
      * Adding check box widgets to group bo */
    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(check1);
    vbox->addWidget(check2);
    vbox->addWidget(check3);
    QGroupBox *group = new QGroupBox;
    group->setLayout(vbox);
    /* Adding grop box to outer layout */
    layout->addWidget(group);

    /* Adding to layout */
    layout->addWidget(button);

    window->setLayout(layout);
    window->show();

    /* TODO
     * 1. Try to implement these all in seperate class
     * 2. Try to make all buttons in seperate group box
     * 3. Try setCheckable for group box
     * 4. Try setExclusive and see the difference */

    return app.exec();
}
