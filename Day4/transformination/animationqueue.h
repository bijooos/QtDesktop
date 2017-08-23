/*************************************************************************
*
* 	Discription : A Demo code for Lab
* 	Author      : Biju
* 	Company     : Emertxe info tech
*
 *************************************************************************/

#ifndef ANIMATIONQUEUE_H
#define ANIMATIONQUEUE_H

#include <QtCore/QObject>
#include <QtGui/QTransform>
#include <QtCore/QTimeLine>

class CoordinateSystem;
class TransformationItem;

/** Applies a list of TransformationItem objects
    in sequence to an image.
*/
class AnimationQueue : public QObject
{
    Q_OBJECT
public:
    AnimationQueue(CoordinateSystem *graphicsObject, QObject* parent=0);
    void add(TransformationItem* i);
    void setItem(CoordinateSystem* a) {
        m_before = a;
    }
protected slots:
    void applyGradual(TransformationItem*);
    void advance(qreal);
    void finishAnimation();
signals:
    void operationFinished();
    void animating(TransformationItem*);
private:
    QTimeLine m_timeLine;
    CoordinateSystem *m_before, *m_after;
    QList<TransformationItem*> m_queue;
    TransformationItem* m_currentOperation;

};

#endif // ANIMATIONQUEUE_H
