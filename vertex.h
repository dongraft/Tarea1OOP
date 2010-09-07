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

class vertex {
private:
    numeric x, y;

public:
    vertex(numeric x, numeric y);
    numeric getX();
    numeric getY();
    void setX(numeric x);
    void setY(numeric y);
};

#endif	/* VERnumericEX_H */