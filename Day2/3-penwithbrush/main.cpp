/*************************************************************************
 *
 * Discription : A demo code for Qpen
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/

#include <QtWidgets>

class Test : public QWidget
{
public:
    Test(QWidget *parent = 0)
        : QWidget(parent)
    {
        /* Setting window size according to word length and height */
        QFont fnt = font();
        fnt.setPixelSize(100);
        QFontMetrics fm(fnt);
        /* To get the size of a font */
        setFixedSize(fm.width("Hello World"), fm.height());
    }

protected:
    void paintEvent(QPaintEvent *)
    {
        QPainter painter(this);
        QFont font = painter.font();
        font.setPixelSize(100);
        painter.setFont(font);
        QFontMetrics fm(font);
        /* Setting a gradient using size of font */
        QLinearGradient gradient(0, 0, fm.width("Hello World"), fm.height());
        gradient.setColorAt(0, Qt::red);
        gradient.setColorAt(0.5, Qt::green);
        gradient.setColorAt(1, Qt::blue);
        QBrush b(gradient);
        /* setting gradiant brush to pen */
        QPen pen(b,0);
        pen.setStyle(Qt::SolidLine);
        painter.setPen(pen);
        painter.drawText(0, 100, "Hello World");
    }
};

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Test test;
    test.show();

    return app.exec();
}
