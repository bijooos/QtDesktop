/*************************************************************************
	 *
	 * Discription : A Demo code for Lab
	 * Author      : Biju
	 * Company     : Emertxe info tech
	 *
 *************************************************************************/

#include <QtWidgets/QApplication>
#include <QtWidgets/QStandardItemModel>

#include "tableview.h"
#include "cityengine.h"

// !!! Typedefs for Qt classes !!!
typedef QStandardItemModel ItemModel;
typedef QStandardItem Item;


ItemModel *createTableModel(QObject *parent) {
    CityEngine *engine = new CityEngine(parent);
    ItemModel *model = new ItemModel(parent);

    QStringList cities = engine->cities();

    foreach(const QString &city, cities) {

        QString country = engine->country(city);
        QIcon flag = engine->flag(country);
        QString population = QString::number(engine->population(city));
        QString area = QString::number(engine->area(city));

        QList<Item*> items;
        items << new Item(city) << new Item(flag, country);
        items << new Item(population) << new Item(area);

        QStringList labels;
        labels << "City" << "Country" << "Population" << "Area";
        model->setHorizontalHeaderLabels(labels);

        model->appendRow(items);
    }

    return model;
}


int main( int argc,  char** argv )
{
    QApplication app( argc, argv );
    TableView view;
    ItemModel* model = createTableModel(&view);

    view.setModel( model );
    view.resize( 640, 480 );
    view.show();

    return app.exec();
}
