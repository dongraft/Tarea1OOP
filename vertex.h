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
    Numeric *x, *y;
public:
    Vertex();
    Vertex(Numeric*,Numeric*);
    Numeric* getX();
    Numeric* getY();
    void setX(Numeric*);
    void setY(Numeric*);
};

#endif	/* VERTEX_H */
