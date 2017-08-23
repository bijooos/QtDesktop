/*************************************************************************
	 *
	 * Discription : A Demo code for Lab
	 * Author      : Biju
	 * Company     : Emertxe info tech
	 *
 *************************************************************************/

#ifndef TableView_H
#define TableView_H

#include <QtWidgets>

class TableView : public QWidget
{
    Q_OBJECT

public:
    explicit TableView( QWidget *parent = 0 );

    void setModel( QAbstractItemModel* model );

private slots:
    void setFilterColumn( int );

private:
    QSortFilterProxyModel *m_proxy;
    QGridLayout *m_layout;
    QTableView *m_tableView;
    QLabel *m_label;
    QLineEdit *m_lineEdit;
};


#endif
