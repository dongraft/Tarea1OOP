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

class Polygon {
public:
    //constructor vacio
    Polygon();
    //constructor con numero de puntos a incluir, como un stack
    Polygon(int);
    //destructor
    ~Polygon();

    void addVertex(Vertex v);
    int getVerticesNumber();
    double getArea();
    double getPerimeter();

private:

    Vertex* vertices;


};

#endif	/* POLYGON_H */

