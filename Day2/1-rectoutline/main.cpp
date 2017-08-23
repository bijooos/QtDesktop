/*************************************************************************
 *
 * Discription : A Example code for understanding QPainter
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/

#include <QtWidgets>

class Test : public QWidget
{
public:
    /* This override function will call automatically when a this object creats */
    virtual void paintEvent(QPaintEvent *)
    {
        QPainter p(this);
        p.setBrush(Qt::black);
        /* QRectF(qreal x, qreal y, qreal width, qreal height) */
        p.drawRect(QRectF(2.0, 2.0, 90.0, 90.0));

        p.setBrush(Qt::red);
        p.drawRect(QRectF(2.0, 102.0, 90.0, 90.0));
        /* Giving more smooth effect in edges */
        p.setRenderHint(QPainter::Antialiasing);
        p.drawRect(QRectF(2.0, 202.0, 90.0, 90.0));
    }
};


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Test test;
    test.resize(150, 400);
    test.show();
    return app.exec();
}
