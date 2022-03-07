#include <stdio.h>
#define size 255
int main() {
    int count = 0;
    char a;
    int count_str = 0;
    int count_number = 0;
    char arr[size] = {0};
    while (a != 'b') {
    a = getchar();
        arr[a]++;
    }
    count = arr[0];
    for (int i = 0; i < size; i++) if (count < arr[i]) count = arr[i];
    for(int i = count; i > 0; i--) {
        printf("\n ");
        for (int j = 0; j < size; j++) if (arr[j] != 0 && j != '\n') (arr[j] >= i)?(putchar('*')):(putchar(' '));
    }
    printf("\n ");
    for(int y = 0; y < size; y++) if (arr[y] != 0 && y != '\n') printf("%c", y);
}
