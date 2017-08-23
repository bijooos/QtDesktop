#include <QtWidgets>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    /* Window widget to show the text widgets */
    QWidget *window = new QWidget;
    /* Layout to arrange widgets in window */
    QVBoxLayout *layout = new QVBoxLayout;
    /* QLabel */
    QLabel *label = new QLabel("Text", window);
    /* You can set a image also in QLabel using QPixMap */
    QPixmap pix("C:/Users/mkbij/OneDrive/Pictures/exmertxe_logo.png");
    /* Setting pixmap to label */
    label->setPixmap(pix);
    /* Adding to label to layout */
    layout->addWidget(label);

    /* QLineEdit */
    QLineEdit *user = new QLineEdit(window);
    user->setText("User name");
    QLineEdit *pass = new QLineEdit(window);
    pass->setEchoMode(QLineEdit::Password);
    /* Adding to layout */

    layout->addWidget(user);
    layout->addWidget(pass);

    QTextEdit *text = new QTextEdit(window);
    /* Adding text as plane text */
    text->setPlainText("Hello");
    /* Adding text as HTML */
    text->append("<p><span style=\"color: #ff0000;\"><em><strong><span style=\"font-size: large;\">Hello</span></strong></em></span></p>");
    layout->addWidget(text);
    /* Setting layout for window */
    window->setLayout(layout);
    window->show();
    /* TODO
     * 1. Try to implement this all in a seperate class
     * 2. Use setInputMask() and setValidator to varify the input given in line edit widgets
     * 3. Use signals and slot to clear the both line edit when enter is pressed in line edit
     *    you can use editingFinished() signal of line edit to implement that */

    return app.exec();
}
