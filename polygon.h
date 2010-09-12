#ifndef POLYGON_H
#define	POLYGON_H

#include "vertex.h"
#include "numeric.h"
#include <QList>

using namespace std;

class Polygon {
public:
    Polygon();
    ~Polygon();

    void addVertex(Vertex *v);
    int getVerticesNumber();
    Numeric getArea();
    Numeric getPerimeter();
    QList<Vertex*> *getVertices();
//    void setOut(vector<Vertex>);

private:
//    vector<Vertex> out;
//    Vertex *out;
    QList<Vertex*> *vertices;
    //Vertex* vertices;

};

#endif	/* POLYGON_H */

