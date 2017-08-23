#include <QtWidgets>

int main(int argc, char*argv[])
{
    QApplication app(argc,argv);
    app.setApplicationDisplayName("ComboBox");

    /* combo box */
    QWidget *window = new QWidget;
    /* this layout to arrange one label and combobox */
    QHBoxLayout *inner_one = new QHBoxLayout;
    /* TO arrange pushbutton */
    QHBoxLayout *inner_two = new QHBoxLayout;
    /* To arrange inner layouts in vertical order */
    QVBoxLayout *outer = new QVBoxLayout;

    QComboBox *combo = new QComboBox(window);
    QLabel *label = new QLabel("Items", window);

    for(int i = 1; i < 4; i++)
    {
        combo->addItem("item "+QString::number(i));
    }
    QPushButton *button = new QPushButton("Which item", window);
    /* TODO
     * 1. Using signal and slot display current item in combo box when we press the button
     * 2. Try Listwidget by your own */

    inner_one->addWidget(label);
    inner_one->addWidget(combo);
    inner_two->addStretch(1);
    inner_two->addWidget(button);

    outer->addLayout(inner_one);
    outer->addLayout(inner_two);

    window->setLayout(outer);
    window->show();

    return app.exec();
}
