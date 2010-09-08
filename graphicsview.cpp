#include "graphicsview.h"
#include <QDebug>
#include <QResizeEvent>
#include <QFontMetrics>

GraphicsView::GraphicsView(QWidget *parent) :
    QGraphicsView(parent)
{
}

void GraphicsView::resizeEvent(QResizeEvent *event)
{
    emit resized(event->size().width(), event->size().height());
}
