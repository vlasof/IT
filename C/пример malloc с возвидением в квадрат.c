#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int *arr;
    arr = malloc(sizeof(int)* n);
    printf("сколько чисел ты хочешь?\n");
    scanf("%d", &n);
    printf("води числа:\n");
    for (int i = 0; i < n; i++) {
        scanf("%i", &arr[i]);
        arr[i] = arr[i] * arr[i];
    }
    printf("возводим в квадрат: ");
    for (int i = 0; i < n; i++) printf("%i ", arr[i]);
    printf("\n");
}

