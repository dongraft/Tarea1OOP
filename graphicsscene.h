#ifndef GRAPHICSSCENE_H
#define GRAPHICSSCENE_H

#include <QGraphicsScene>

class GraphicsScene : public QGraphicsScene
{
    Q_OBJECT
public:
    GraphicsScene(QObject *parent = 0);

  //  void mousePressEvent(QGraphicsSceneMouseEvent *event);

public slots:
    void setNewSize(int width, int height);
};

#endif // GRAPHICSSCENE_H
