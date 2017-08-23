/*************************************************************************
*
* 	Discription : A Demo code for Lab
* 	Author      : Biju
* 	Company     : Emertxe info tech
*
 *************************************************************************/

/* -*-C++-*- */
#ifndef DIAGRAMSCENE_H
#define DIAGRAMSCENE_H

#include <QtWidgets/QGraphicsScene>

class DiagramScene : public QGraphicsScene {
public:
    explicit DiagramScene( QObject* parent=0 );
protected:
    /*reimp*/void dragMoveEvent( QGraphicsSceneDragDropEvent* event );
    /*reimp*/void dropEvent( QGraphicsSceneDragDropEvent* event );
};

#endif /* DIAGRAMSCENE_H */

