/*************************************************************************
*
* 	Discription : A Demo code for Lab
* 	Author      : Biju
* 	Company     : Emertxe info tech
*
 *************************************************************************/

#include <QtWidgets/QGraphicsScene>
#include "animationqueue.h"
#include "coordinatesystem.h"
#include "transformationitem.h"


AnimationQueue::AnimationQueue(CoordinateSystem *graphicsObject, QObject* parent) : QObject(parent)
{
    // setup animation
    m_before = graphicsObject;
    m_currentOperation = 0;

    m_timeLine.setFrameRange(0, 100);
    m_timeLine.setDuration(2000);

    connect (&m_timeLine, SIGNAL(valueChanged(qreal)), this, SLOT(advance(qreal)));
    connect (&m_timeLine, SIGNAL(finished()), this, SLOT(finishAnimation()));

}


void AnimationQueue::add(TransformationItem *i) {
    m_queue << i;
    if (m_timeLine.state() != QTimeLine::Running) {
        applyGradual(m_queue.takeFirst());
    }
}


void AnimationQueue::advance(qreal v) {
    if (m_after == 0) return;
    m_before->setOpacity(1.0 - v);
    m_after->setOpacity(v);
}

void AnimationQueue::finishAnimation() {
    m_currentOperation->apply(m_before);
    m_before->setOpacity(1.0);
    m_before->scene()->removeItem(m_after);
    delete m_after;
    m_after = 0;
    if (m_queue.isEmpty()) {
        m_currentOperation = 0;
        m_timeLine.stop();
    }
    else {
        applyGradual(m_queue.takeFirst());
    }
    emit operationFinished();
}

void AnimationQueue::applyGradual(TransformationItem *operation) {
    emit animating(operation);
    m_currentOperation = operation;
    m_after = m_before->copy();
    m_after->setOpacity(0.0); // make transparent
    m_before->scene()->addItem(m_after);
    operation->apply(m_after);
    m_timeLine.start();
}
