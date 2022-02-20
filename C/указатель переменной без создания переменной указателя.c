#include <stdio.h>

void plus(int *x) {
    *x = *x + 100;
    printf("plus x = %d\n", x);//адрес 
    printf("plus x = %d\n", *x);//значение
}
void ymn(int *y) {
    *y *= *y;
    printf("ymn y = %d\n", y);//адрес 
    printf("ymn y = %d\n", *y);//значение
}
int main() {
    int x = 5, y = 6;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    plus(&x);
    ymn(&y);
    printf("Hello World\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}


