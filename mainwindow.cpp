#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QDebug>
using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    scene = new GraphicsScene(this);
    polygon = new Polygon();
    ui->graphicsView->setScene(scene);
    //blablabla aca se intera con la entrada


    long inputX, inputY=0;
    bool godisbymyside = true;
    while(1){
        cout << "Nuevo vertice. Numero negativo para terminar\n";
        cout << "Coordenada X del vertice: ";
        cin >> inputX;
        if(inputX < 0){
            break;
        }
        cout << "Coordenada Y del vertice: ";
        cin >> inputY;
        if(inputY < 0){
            break;
        }
        Numeric x(inputX); Numeric y(inputY);
        Vertex* vertex = new Vertex(x, y);
        polygon->addVertex(vertex);
    }


//    long a = 20;
//    long b = 50;
//    Numeric test(a,b);
//    qDebug() << "El numeric de prueba" << test.toString();


//    qDebug() << "vertex x es:" << vertex->getX().toString();

//    polygon->addVertex(vertex);
//    polygon->addVertex(vertex);
//    qDebug() << polygon->getVerticesNumber();
//    qDebug() << polygon->getVertices()->at(0)->getX().toString();
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

