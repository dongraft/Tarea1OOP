#include "utils.h"
#include <math.h>

Numeric sqrt(Numeric n){
    long _num = sqrt(n.getNum());
    long _den = sqrt(n.getDen());
    return Numeric(_num,_den);
}
