#ifndef GRAPHICSVIEW_H
#define GRAPHICSVIEW_H

#include <QGraphicsView>

class graphicsview : public QGraphicsView
{

    Q_OBJECT

public:
    graphicsview(QWidget *parent = 0);
    void resizeEvent(QResizeEvent *event);

signals:
    void resized(int width, int height);
};

#endif // GRAPHICSVIEW_H
