#include "vertex.h"
#include <assert.h>
#include <QDebug>

Vertex::Vertex(){
    assert(true);
}

Vertex::Vertex(Numeric x, Numeric y){
    assert(x.getDen() != 0);
    assert(y.getDen() != 0);
    this->x = x;
    this->y = y;
    qDebug() << "Agregando los numerics" << x.toString() << "y " << y.toString();
}

Numeric Vertex::getX(){
    return x;
}

Numeric Vertex::getY(){
    return y;
}

void Vertex::setX(Numeric x){
    assert(x.getDen() != 0);
    this->x = x;
}

void Vertex::setY(Numeric y){
    assert(y.getDen() != 0);
    this->y = y;
}
