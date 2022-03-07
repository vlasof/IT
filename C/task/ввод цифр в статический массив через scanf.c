#include <stdio.h>
int main() {
    int mass[10];
    int numbers;
    int you;
    for(numbers = 0; numbers < 10; numbers++) {
        scanf("%d", &you);
        mass[numbers] = you;
    }
    for(numbers = 0; numbers < 10; numbers++) printf("mass[%d] = %d\n", numbers, mass[numbers]);
}



