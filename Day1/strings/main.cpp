#include <QtWidgets>
#include <QString>
#include <QStringList>
#include <QDebug>

int main(int argc, char *argv[])
{
    /* Conversion constructor and assignment operators:
    */
    QString str("abc");
    str = "def";
    qDebug() << str;

    /*  From a number using a static function:
    */
    QString n = QString::number(1234);
    qDebug() << n;

    /*  From a char pointer  using a static function:
    */
    QString text = QString::fromLatin1("Hello Qt");
    qDebug() << text;
    text = QString::fromUtf8("inputText");
    qDebug() << text;
    text = QString::fromLocal8Bit("cmdLineInput");
    qDebug() << text;
    text = QStringLiteral("Literal String");
    qDebug() << text;
    /*  From char pointer with translations:
    */
    text = QObject::tr("Hello Qt");
    qDebug() << text;
    /* Operators and right, left and mid justifications
     * */
    QString fileName = "MyFile";
    fileName += ".txt";
    qDebug() << fileName;

    QString s = "apple";
    QString t = s.leftJustified(8, '.');
    qDebug() << t;

    /* QString::arg()
     */
    int i = 10;
    int total = 99;
    QString file = "MyFile.txt";
    QString status = QObject::tr("Processing file %1 of %2: %3").arg(i).arg(total).arg(fileName);

    qDebug() << status;



    return 0;
}
