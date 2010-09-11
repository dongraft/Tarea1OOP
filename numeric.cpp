#include "numeric.h"
#include <assert.h>
#include <QDebug>
#include <math.h>

Numeric::Numeric(){
    assert(true);
    Numeric(0,0);
}

Numeric::Numeric(int n){
    Numeric(n,1);
}

//Numeric::Numeric(float n){
//    Numeric(long(n),1);
//}

Numeric::Numeric(double n){
    Numeric(long(n),1);
}

Numeric::Numeric(long n){
    Numeric(n,1);
}

Numeric::Numeric(long num, long den){
    //den mayor a 0, obvio
    qDebug() << "num/den:" << num <<"/" <<den;
    assert(den!=0);
    long numTmp = num;
    long denTmp = den;
    //eclides para maximo comun divisor, mcd o gcd
    while(numTmp != denTmp){
        if(numTmp > denTmp)
            numTmp -= denTmp;
        else
            denTmp -= numTmp;
    }
    this->num = num/numTmp;
    this->den = den/numTmp;
}

Numeric Numeric::operator+(const Numeric & n){
    long retNum = this->num * n.den + n.num * this->den;
    long retDen = this->den * n.den;
    return Numeric(retNum, retDen);
}

Numeric Numeric::operator-(const Numeric & n){
    long retNum = this->num * n.den - n.num * this->den;
    long retDen = this->den * n.den;
    return Numeric(retNum, retDen);
}

Numeric Numeric::operator*(const Numeric & n){
    long retNum = this->num * n.num;
    long retDen = this->den * n.den;
    return Numeric(retNum, retDen);
}

Numeric Numeric::operator/(const Numeric & n){
    long retNum = this->num * n.den;
    long retDen = this->den * n.num;
    return Numeric(retNum, retDen);
}

QString Numeric::toString(){
    QString out = QString("%1/%2").arg(num).arg(den);
    return out;
}

long Numeric::getDen(){
    return den;
}

long Numeric::getNum(){
    return num;
}

void Numeric::setNum(long num){
    this->num = num;
}

void Numeric::setDen(long den){
    assert(den!=0);
    this->den = den;
}

int Numeric::getPx(){
    return (int)(num/den);
}
