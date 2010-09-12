#include "polygon.h"
#include <vector>
#include <QDebug>
#include "utils.h"
#include <math.h>

//Vertex* out;
//Vertex* vertices;
Polygon::Polygon(){
    assert(true);
    vertices = new QList<Vertex*>();
}

Polygon::~Polygon(){
    delete vertices;
}

void Polygon::addVertex(Vertex *v){
    //no necesita assert, Vertex viene bien armado de fabrica
    vertices->push_back(v);
    qDebug() << "Agregue un Vertice" << v->getX().toString();
}

int Polygon::getVerticesNumber(){
    return this -> vertices->size();
}

//Numeric Polygon::getArea(){
//    assert(vertices->size()>2);

//    Vertex *v_i,*v_i1;
//    Numeric area;

//    for(int i = 0; i<vertices->size()-1; i++){
//        v_i = vertices->at(i);
//        v_i1 = vertices->at(i+1);
//        area = area+((v_i->getX()*v_i1->getY())-(v_i->getY()*v_i1->getX()))/2;
//    }
//    //los vuelvo a usar
//    v_i = vertices->at(vertices->size()-1);
//    v_i1 = vertices->at(0);
//    area = area + v_i->getX()*v_i1->getY() - v_i->getY()*v_i1->getX();
//    return area;
//}

//Numeric Polygon::getPerimeter(){
//    assert(vertices->size()>2);
//    Vertex *v_i,*v_i1;
//    Numeric perimeter;
//    double x_num2, x_den2, y_num2, y_den2;
//    for(int i = 0; i<vertices->size()-1; i++){
//        v_i = vertices->at(i);
//        v_i1 = vertices->at(i+1);
//        x_num2 = pow((v_i->getX() - v_i1->getX())->getNum(),2);
//        x_den2 = pow((v_i->getX() - v_i1->getX())->getDen(),2);
//        y_num2 = pow((v_i->getY() - v_i1->getY())->getNum(),2);
//        y_den2 = pow((v_i->getY() - v_i1->getY())->getDen(),2);
//        perimeter = perimeter + sqrt(Numeric(x_num2,x_den2)+Numeric(y_num2,y_den2));
//    }
//    v_i = vertices->at(vertices->size()-1);
//    v_i1 = vertices->at(0);
//    x_num2 = pow((v_i->getX() - v_i1->getX())->getNum(),2);
//    x_den2 = pow((v_i->getX() - v_i1->getX())->getDen(),2);
//    y_num2 = pow((v_i->getY() - v_i1->getY())->getNum(),2);
//    y_den2 = pow((v_i->getY() - v_i1->getY())->getDen(),2);
//    perimeter = perimeter + sqrt(Numeric(x_num2,x_den2)+Numeric(y_num2,y_den2));

//    return perimeter;
//}

QList<Vertex*>* Polygon::getVertices(){
    assert(vertices->size()>2);
    return vertices;
}

//void Polygon::setOut(vector<Vertex> v){

//    this->out = v;
//}
