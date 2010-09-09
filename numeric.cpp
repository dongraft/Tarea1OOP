#include "numeric.h"

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

int Numeric::getPx(){
    return (int)(num/den);
}
