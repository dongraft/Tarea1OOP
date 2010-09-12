#include "vertex.h"
#include <assert.h>
#include <QDebug>

Vertex::Vertex(){
    assert(true);
}

Vertex::Vertex(Numeric *x, Numeric *y){
    //assert(x.getDen() != 0 && y.getDen() != 0);
    this->x = x;
    this->y = y;
    qDebug() << "Agregué los numerics";
}

Numeric* Vertex::getX(){
    return x;
}

Numeric* Vertex::getY(){
    return y;
}

void Vertex::setX(Numeric *x){
    assert(x->getDen() != 0);
    this->x = x;
}

void Vertex::setY(Numeric *y){
    assert(y->getDen() != 0);
    this->y = y;
}
