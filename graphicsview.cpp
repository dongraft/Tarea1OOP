#include "graphicsview.h"
#include "graphicsscene.h"
#include <QDebug>
#include <QResizeEvent>
#include <QFontMetrics>

QFontMetrics GraphicsView::fm = QFontMetrics(QFont());
int GraphicsView::height = 0;

GraphicsView::GraphicsView(QWidget *parent) :
    QGraphicsView(parent)
{
}

void GraphicsView::resizeEvent(QResizeEvent *event)
{
    emit resized(event->size().width(), event->size().height());
}
