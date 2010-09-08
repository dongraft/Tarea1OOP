#include "graphicsscene.h"
#include "graphicsview.h"
#include <QGraphicsSceneMouseEvent>
#include <QDebug>

GraphicsScene::GraphicsScene(QObject *parent) : QGraphicsScene(parent)
{
}
void setNewSize(int width, int height)
{
    setSceneRect(0, 0, width, height);
}
