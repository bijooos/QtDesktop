/*************************************************************************
*
* 	Discription : A Demo code for Lab
* 	Author      : Biju
* 	Company     : Emertxe info tech
*
 *************************************************************************/

#include <QtWidgets>

int main(int argc, char **argv) {
  QApplication app(argc, argv);
  /* This works like a "View" for the graphic model */
  QGraphicsView view;
  /* This works like a "Model" for the view */
  QGraphicsScene *scene = new QGraphicsScene(&view);
  /* Setting model in view */
  view.setScene(scene);
  view.setBackgroundBrush(Qt::yellow);
  /* To add/draw a rectangle in model/view */
  QGraphicsRectItem *rect = new QGraphicsRectItem(-10, -10, 120, 50);
  scene->addItem(rect);
  /* To add/view text in model/view */
  QGraphicsTextItem *text = scene->addText("Hello World!");
  //text->pen;
  view.show();
  return app.exec();
}

