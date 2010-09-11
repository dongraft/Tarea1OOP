#include "polygon.h"
#include <vector>

//Vertex* out;
//Vertex* vertices;
Polygon::Polygon(){
}

Polygon::~Polygon(){

}

void Polygon::addVertex(Vertex v){
    this -> vertices.push_back(v);
}

int Polygon::getVerticesNumber(){
    return this -> vertices.size();
}

double Polygon::getArea(){
 return 0;
}

double Polygon::getPerimeter(){
return 0;
}

vector<Vertex> Polygon::getVertices(){
    return this->vertices;
}

void Polygon::setOut(vector<Vertex> v){
    this->out = v;
}
