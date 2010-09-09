#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new GraphicsScene(this);
    ui->graphicsView->setScene(scene);

//    scene->addEllipse(100,100,50,50);
//    scene->addEllipse(0,100,100,20);


    connect(ui->graphicsView, SIGNAL(resized(int,int)),
            scene, SLOT(setNewSize(int, int)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete scene;
}
