/* 
 * File:   polygon.h
 * Author: jcarrera
 *
 * Created on September 7, 2010, 3:12 PM
 */

#ifndef POLYGON_H
#define	POLYGON_H

#include "vertex.h"
#include "numeric.h"
#include <vector>

using namespace std;

class Polygon {
public:
    Polygon();
    ~Polygon();

    void addVertex(Vertex *v);
    int getVerticesNumber();
    Numeric getArea();
    Numeric getPerimeter();
    vector<Vertex> getVertices();
//    void setOut(vector<Vertex>);

private:
//    vector<Vertex> out;
    //Vertex *out;
    vector<Vertex> *vertices;
    //Vertex* vertices;

};

#endif	/* POLYGON_H */

