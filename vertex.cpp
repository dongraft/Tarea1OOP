#include "vertex.h"
#include <assert.h>

Vertex::Vertex(){
    assert(0);
}

Vertex::Vertex(Numeric x, Numeric y){
    assert(x.getDen() != 0 && y.getDen() != 0);
    this->x = x;
    this->y = y;
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
