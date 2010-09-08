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
    numeric<class T>& x, y;

public:
    vertex(numeric<class T> x, numeric<class T> y);
    numeric<class T> getX();
    numeric<class T> getY();
    void setX(numeric x);
    void setY(numeric y);
};

#endif	/* VERTEX_H */
