#include <stdio.h>
int main() {
    int count = 0;
    char a;
    while (a != 'b') {
    a = getchar();
        if (a != ' ') {
            putchar(a);
            count = 0;
        }
        if (a == ' ' && count == 0) {
            count++;
            putchar(a);
        }
    }
}
