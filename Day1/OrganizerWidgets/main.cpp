#include <QtWidgets>
#include <QTextEdit>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout;

    QTabWidget *mainTab = new QTabWidget(window);

    mainTab->addTab(new QTextEdit, "Tab-1" );
    mainTab->addTab(new QTextEdit, "Tab-2" );
    /* Adding two text edits in two tabs
     * NOTE : We can add any QWidget inherited objects to tabs
     * TODO : Try to create a seperate class inherited from QWidget and try to add that class object to tabs
     * The custom widget must have one text widget and two push buttons save and clear*/

    layout->addWidget(mainTab);
    window->setLayout(layout);
    window->show();

    return app.exec();
}
