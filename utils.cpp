#include "utils.h"
#include <math.h>

Numeric sqrt(Numeric n){
    long _num = sqrt(n.getNum());
    long _den = sqrt(n.getDen());
    return Numeric(_num,_den);
}

long gcd(long _a, long _b){
    long a = _a;
    long b = _b;
    while(b != 0){
        long tmp = a;
        a = b;
        b = tmp%b;
    }
    return a==0 ? 1: a;
}

Numeric fabs(Numeric n){
    long _num = fabs(n.getNum());
    long _den = fabs(n.getDen());
    return Numeric(_num,_den);
}
