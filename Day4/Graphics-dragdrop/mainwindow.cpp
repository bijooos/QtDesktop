/*************************************************************************
*
* 	Discription : A Demo code for Lab
* 	Author      : Biju
* 	Company     : Emertxe info tech
*
 *************************************************************************/

#include <QtWidgets/QGraphicsView>

#include "mainwindow.h"
#include "toolbox.h"
#include "diagramscene.h"

MainWindow::MainWindow( QWidget* parent )
    : QMainWindow( parent )
{
    m_toolbox = new ToolBox;
    m_view = new QGraphicsView;
    setCentralWidget( m_view );
    addDockWidget( Qt::LeftDockWidgetArea, m_toolbox );


    DiagramScene* scene = new DiagramScene( this );
    scene->setSceneRect( QRectF( 0,0, 1000, 1000 ) );
    m_view->setScene( scene );
}
