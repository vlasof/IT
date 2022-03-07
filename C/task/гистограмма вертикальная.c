#include <stdio.h>
#define size 200
int main() {
    int count = 0;
    char a;
    int count_str = 0;
    int count_number = 0;
    char arr[size];
    
    while (a != 'b') {
    a = getchar();
        if (a != ' ' && a != '\n' && a != '\t') {
            
            count = 0;
            count_str++;
        }
        if ((a == ' ' || a == '\n' || a == '\t') && count == 0) {
            count++;
            arr[count_number] = count_str;
            count_str = 0;
            count_number++;
        }
    }
    count = arr[0];
    for (int i = 0; i < count_number; i++) if (count < arr[i]) count = arr[i];
    for(int i = count; i > 0; i--) {
        printf("\n");
        for (int j = 0; j < count_number; j++) {
            (arr[j] >= i)?(putchar('*')):(putchar(' '));
        }
    }
}
