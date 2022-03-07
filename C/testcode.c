#include <stdio.h>
int main() {
    int i = 0;
    while (++i < 5) {
        printf("%d ", i);//1 2 3 4
    }
    printf("\n");
    int g = 0;
    while (g++ < 5) {
        printf("%d ", g);//1 2 3 4 5
    }
    
}