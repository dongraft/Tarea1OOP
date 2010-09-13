#include "utils.h"
#include <math.h>
#include <vertex.h>

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

bool intersection(Vertex v1, Vertex v2, Vertex v3, Vertex v4){
    //http://en.wikipedia.org/wiki/Line-line_intersection

    Numeric x1 = v1.getX(), y1 = v1.getY();
    Numeric x2 = v2.getX(), y2 = v2.getY();

    Numeric x3 = v3.getX(), y3 = v3.getY();
    Numeric x4 = v4.getX(), y4 = v4.getY();

    Numeric diffX12 = x1 - x2, diffX34 = x3 - x4;
    Numeric diffY12 = y1 - y2, diffY34 = y3 - y4;

    Numeric x1y2 = x1*y2, y1x2 = y1*x2, x3y4 = x3*y4, y3x4 = y3*x4;

    if((diffX12.getNum()==0 && diffX34.getNum()==0)||(diffY12.getNum()==0 && diffY34.getNum()==0))
        return false;

    Numeric diffMult12 = x1y2 - y1x2, diffMult34 = x3y4 - y3x4;

    Numeric multDiffsUpLeftX = diffMult12*diffX34, multDiffsUpRightX = diffX12*diffMult34;
    Numeric multDiffsUpLeftY = diffMult12*diffY34, multDiffsUpRightY = diffY12*diffMult34;

    Numeric multDiffsDwLeft = diffX12*diffY34, multDiffsDwRight = diffY12*diffX34;

    Numeric numX = multDiffsUpLeftX - multDiffsUpRightX;
    Numeric numY = multDiffsUpLeftY - multDiffsUpRightY;

    Numeric denom = multDiffsDwLeft - multDiffsDwRight;

    Numeric pX = numX/denom;
    Numeric pY = numY/denom;

    return false;
}
