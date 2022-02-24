#include <stdio.h>
#include <math.h>
int main() {
    double x1, x2;
    scanf("%lf%lf", &x1, &x2);
    if (x1 >= 0 && x2 > x1) printf("%.0lf", fabs(x2 - x1));//1 - 4 = 3
    if (x2 >= 0 && x1 > x2) printf("%.0lf", fabs(x1 - x2));//4 - 1 = 3
    if (x1 > x2 && x1 <= 0) printf("%.0lf", fabs(x2 - x1));//-1 - -4 = 3
    if (x1 < x2 && x2 <= 0) printf("%.0lf", fabs(x1 - x2));//-4 - -1 = 3
    if (x1 < 0 && x2 > 0) printf("%.0lf", fabs(x1 - x2));//-1 - 2 = 3
    if (x1 > 0 && x2 < 0) printf("%.0lf", fabs(x2 - x1));//-2 - 1 = 3
    if (x1 == x2) printf("0");//2 - 2 = 0
}