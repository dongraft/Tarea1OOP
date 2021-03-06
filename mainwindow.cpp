#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QDebug>
#include <assert.h>
using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    scene = new GraphicsScene(this);
    polygon = new Polygon();
    ui->graphicsView->setScene(scene);

    long inputX, inputY=0;
    bool godisbymyside = true;
    while(godisbymyside){
        qDebug() << "El poligono tiene " << polygon->getVerticesNumber() << " vertices";
        qDebug() << "Nuevo vertice. Numero negativo para terminar";
        cout << "Coordenada X del vertice: ";
        cin >> inputX;
        if(inputX < 0){
            qDebug() << "Su poligono a modo de produccion ha pasado";
            break;
        }
        cout << "Coordenada Y del vertice: ";
        cin >> inputY;
        if(inputY < 0){
            qDebug() << "Su poligono a modo de produccion ha pasado";
            break;
        }
        Numeric x(inputX,1); Numeric y(inputY,1);
        Vertex* vertex = new Vertex(x, y);
        polygon->addVertex(vertex);
        cout << "\n";
    }
    Numeric area = polygon->getArea();
    assert(area.getNum()>0);
    QList<Vertex*>* vertices = polygon->getVertices();

    for(int i = 0; i<vertices->size()-1; i++){
        Vertex* a = vertices->at(i);
        Vertex* b = vertices->at(i+1);
        scene->addLine(a->getX().getPx(),a->getY().getPx(),b->getX().getPx(),b->getY().getPx());
    }
    Vertex* a = vertices->at(vertices->size()-1);
    Vertex* b = vertices->at(0);
    scene->addLine(a->getX().getPx(),a->getY().getPx(),b->getX().getPx(),b->getY().getPx());

    qDebug() << "Area del poligono: " << area.toString();
    qDebug() << "Perimetro del poligono: " << polygon->getPerimeter().toString();

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

