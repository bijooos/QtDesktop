
#include <QtWidgets>
#include <QString>
#include <QStringList>
#include <QList>
#include <QHash>
#include <QMap>
#include <QListIterator>
#include <QDebug>

int main(int argc, char **argv)
{
    /* QList
     */
    {
    QList<QString> list;
    list << "one" << "two" << "three";
    QString item1 = list[1]; // “two”
    for(int i=0; i<list.count(); i++)
    {
        const QString &item2 = list.at(i);
    }
    int index = list.indexOf("two"); // returns 1
    }
    /* QMap
     */
    {
    QMap<QString, int> map;
    map["Norway"] = 5; map["Italy"] = 48;
    int value = map["France"]; // inserts key if not exists
    if(map.contains("Norway"))
    {
        int value2 = map.value("Norway"); // recommended lookup
    }
    }
    /* Iterators
     */
    {
    QList<QString> list;
    list << "A" << "B" << "C" << "D";
    QListIterator<QString> it(list);
    while(it.hasNext())
    {
        qDebug() << it.next(); // A B C D
    }
    it.toBack(); // position after the last item
    while(it.hasPrevious())
    {
        qDebug() << it.previous(); // D C B A
    }
    }
    /* Modifying During Iteration
     */
    {
    QList<int> list;
    list << 1 << 2 << 3 << 4;
    QMutableListIterator<int> i(list);
    while (i.hasNext())
    {
        if (i.next() % 2 != 0)
            i.remove();
    }
    }
    /* QMap iterator
     * */
    {
    QMap<QString, QString> map;
    map["Paris"] = "France";
    map["Guatemala City"] = "Guatemala";
    map["Mexico City"] = "Mexico";
    map["Moscow"] = "Russia";
    QMutableMapIterator<QString, QString> i(map);
    while (i.hasNext())
    {
        if (i.next().key().endsWith("City"))
            i.remove();
    }
    }
    // map now "Paris", "Moscow"
    return 0;
}
