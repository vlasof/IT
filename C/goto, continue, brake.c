#include <stdio.h>

int main() {
    int x = 33;
    
    for (int i = 0; i <= 3; i++) {
        if (i == 2) break;
        printf("%d\n", i);//0 1
    }
    
    printf("\n");
    for (int i = 0; i <= 3; i++) {
        if (i == 2) continue;
        printf("%d\n", i);//0 1 3
    }
    
    printf("\n");
    for (int i = 0; i <= 3; i++) {
        if (i == 2) goto metka;
        printf("%d\n", i);//0 1
    }
    metka:
    printf("\n");
    printf("%d\n", x);//33
}
