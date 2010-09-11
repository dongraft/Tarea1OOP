#ifndef NUMERIC_H
#define	NUMERIC_H

#include <assert.h>
#include <QString>

class Numeric{

private:
    long num;
    long den;

public:
    Numeric();
    Numeric(int);
    //Numeric(float);
    Numeric(double);
    Numeric(long);
    Numeric(long,long);
    Numeric operator+(const Numeric &);
    Numeric operator-(const Numeric &);
    Numeric operator/(const Numeric &);
    Numeric operator*(const Numeric &);
    Numeric sqrt(Numeric);
    QString toString();
    void setNum(long);
    void setDen(long);
    long getNum();
    long getDen();
    int getPx();
};

#endif	/* NUMERIC_H */

