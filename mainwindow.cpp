#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    scene = new GraphicsScene(this);
    polygon = new Polygon;
    ui->graphicsView->setScene(scene);
    //blablabla aca se intera con la entrada

    Vertex* vertex = new Vertex(Numeric(100), Numeric(50));
    qDebug() << "vertex x es:" << vertex->getX().toString();
    polygon->addVertex(vertex);

//    polygon->addVertex(Vertex(Numeric(300),Numeric(120)));
//    polygon->addVertex(Vertex(Numeric(320),Numeric(250)));
//    polygon->addVertex(Vertex(Numeric(150),Numeric(330)));
//    polygon->addVertex(Vertex(Numeric(50),Numeric(200)));

    //unsigned int count = polygon->getVerticesNumber();
   // vector<Vertex*> vertices = polygon->getVertices();

//    for(unsigned int i = 0; i<count-1; i++){
  //      Vertex a = vertices.at(i);
    //    qDebug() << "Esto es i" << i<< "Vertice en X: " << a.getX().getPx();

        //Vertex b = vertices.at(i+1);
       // scene->addLine(a.getX().getPx(),a.getY().getPx(),b.getX().getPx(),b.getY().getPx());
   // }


 //   scene->addEllipse(100,100,50,50);
//    scene->addEllipse(0,100,100,20);

    connect(ui->graphicsView, SIGNAL(resized(int,int)), scene, SLOT(setNewSize(int, int)));
}

MainWindow::~MainWindow(){
    delete ui;
    delete scene;
    delete polygon;
}

//void MainWindow::setPolygon(Polygon p){
//    this->polygon = p;
//}

