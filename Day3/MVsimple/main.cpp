/*************************************************************************
	 *
	 * Discription : A Demo code for Lab
	 * Author      : Biju
	 * Company     : Emertxe info tech
	 *
 *************************************************************************/

#include <QtWidgets/QFileSystemModel>
#include <QtWidgets/QListView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QApplication>

int main( int argc, char** argv ) {
    QApplication app( argc, argv );

    QSplitter* splitter = new QSplitter;

    QTreeView* tree = new QTreeView( splitter );
    QListView* list = new QListView( splitter );

    QFileSystemModel* model = new QFileSystemModel;
    model->setRootPath( QDir::root().path() );

    tree->setModel( model );
    list->setModel( model );

    list->setRootIndex( model->index( "." ) );

    splitter->show();

    return app.exec();
}
