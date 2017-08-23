/*************************************************************************
 *
 * Discription : A template code for Lab
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/

#include <QApplication>
#include <QtWidgets>
#include <QPainter>

class Canvas : public QWidget
{
public:
    virtual void paintEvent(QPaintEvent *)
    {
        QPainterPath path;
        //path.addRect(20, 20, 60, 60);

        path.moveTo(0, 0);
        path.cubicTo(99, 0,  50, 50,  99, 99);
        path.cubicTo(0, 99,  50, 50,  0, 0);

        QPainter painter(this);
       // painter.fillRect(0, 0, 100, 100, Qt::white);
        painter.setPen(QPen(QColor(79, 106, 25), 1, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin));
        painter.setBrush(QColor(122, 163, 39));

        painter.drawPath(path);
    }
};
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	Canvas board;
    board.resize(100, 100);
    board.show();
    return a.exec();
}
