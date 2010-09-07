/* 
 * File:   numeric.h
 * Author: jcarrera
 *
 * Created on September 7, 2010, 4:23 PM
 */

#ifndef NUMERIC_H
#define	NUMERIC_H

template <class T>
class numeric{

private:
    T number;

public:
    numeric(int);
    numeric(float);
    numeric(double);
    numeric(long);
};

template<class T> numeric<T>::numeric(int n){
    number = n;
}

#endif	/* NUMERIC_H */

