/*************************************************************************
 *
 * Discription : A Demo code for gradient in painter
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
    {}

protected:
    void paintEvent(QPaintEvent *)
    {
        /* obtaining the current width and heght of window */
        int w = width();
        int h = height()/3;
        QPainter painter(this);

        {   /* A linear gradient with adjusting geometry according to current window size */
            QLinearGradient gradient(5, 5, w-10, h-10);
            /* Starting with a colour Red */
            gradient.setColorAt(0, Qt::red);
            gradient.setColorAt(0.5, Qt::green);
            gradient.setColorAt(1, Qt::blue);
            /* setting gradiant as a brush in painter */
            painter.setBrush(gradient);
            /* Using gradient painting a rectangle */
            painter.drawRect(5, 5, w-10, h-10 );
        }

        {
            QRadialGradient gradient(w/2+5, h+h/2+5, w/2, w/3, h+h/3);
            gradient.setColorAt(0, Qt::white);
            gradient.setColorAt(0.5, Qt::green);
            gradient.setColorAt(1, Qt::black);
            painter.setBrush(gradient);
            painter.drawEllipse(5, h+5, w-10, h-10);
        }

        {
            QConicalGradient gradient(2*w/3, 2*h+h/3, 0);
            gradient.setColorAt(0, Qt::black);
            gradient.setColorAt(0.4, Qt::green);
            gradient.setColorAt(0.6, Qt::white);
            gradient.setColorAt(1, Qt::black);
            painter.setBrush(gradient);
            painter.drawEllipse(5, 2*h+5, w-10, h-10);
        }
    }
};


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Test test;
    test.resize(100, 300);
    test.show();

    return app.exec();
}
