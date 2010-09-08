/* 
 * File:   vertex.h
 * Author: jcarrera
 *
 * Created on September 7, 2010, 2:37 PM
 */

#ifndef VERTEX_H
#define	VERTEX_H

#include <assert.h>
#include "numeric.h"

class Vertex {
private:
    double x, y;

public:
    Vertex vertex(double x, double y);
    double getX();
    double getY();
    void setX(double x);
    void setY(double y);
};

#endif	/* VERTEX_H */
