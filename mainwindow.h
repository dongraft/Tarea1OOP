#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include "graphicsscene.h"
#include "polygon.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //void setPolygon(Polygon);

private:
    Ui::MainWindow *ui;
    GraphicsScene *scene;
    Polygon *polygon;
};

#endif // MAINWINDOW_H
