#include "numeric.h"
#include <assert.h>
#include <QDebug>
#include <math.h>
#include "utils.h"

Numeric::Numeric(){
    Numeric(0,1);
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
    assert(den!=0);
    qDebug() << "num/den:" << num <<"/" <<den;
    long gcd = UTILS_H::gcd(num,den);
    if(gcd!=1){
        this->num = num/gcd;
        this->den = den/gcd;
    }
    this->num = num;
    this->den = den;
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
