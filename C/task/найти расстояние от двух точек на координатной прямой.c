#include <stdio.h>
#include <math.h>
int main() {
    double x1, x2, y1, y2, res, xx, yy;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    xx = pow(x1 - x2, 2);
    yy = pow(y1 - y2, 2);
    res = sqrt(xx + yy);
    printf("%.2lf", res);
}