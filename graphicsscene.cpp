#include "graphicsview.h"
#include "graphicsscene.h"
#include <QDebug>
#include <QResizeEvent>
#include <QFontMetrics>

GraphicsView::GraphicsView(QWidget *parent) :
    QGraphicsView(parent)
{


}

//void GraphicsView::resizeEvent(QResizeEvent *event)
//{
//    height = event->size().height();
//    emit resized(event->size().width(), event->size().height());
//}
