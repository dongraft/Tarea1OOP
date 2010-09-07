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

class polygon {
public:
    //constructor vacio
    polygon();
    //constructor con numero de puntos a incluir, como un stack
    polygon(int);
    //destructor
    ~polygon();

    void addVertex(vertex v);
    int getVerticesNumber();
    numeric getArea();
    numeric getPerimeter();

private:

    vertex* vertices;
    //int perimeter;
    //int area;


};

#endif	/* POLYGON_H */

