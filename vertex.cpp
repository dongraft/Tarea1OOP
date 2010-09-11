#include "vertex.h"

Vertex::Vertex(){

}

Vertex::Vertex(Numeric x, Numeric y){
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
    this->x = x;
}

void Vertex::setY(Numeric y){
    this->y = y;
}
