#include <stdio.h>
int main() {
    int count = 0;
    char a;
    while (a != 'b') {
    a = getchar();
        if (a != ' ' && a != '\n' && a != '\t') {
            putchar(a);
            count = 0;
        }
        if ((a == ' ' || a == '\n' || a == '\t') && count == 0) {
            count++;
            putchar('\n');
        }
        
    }
}
