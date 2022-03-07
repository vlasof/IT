#include <stdio.h>
int main() {
    char c;
    while (c != 'b') {
        c = getchar();
        if (c == '\t') {
            c = 't';
            printf("\\");
        }
        if (c == '\b') {
            c = 'b';
            printf("\\");
        }
        if (c == '\\') {
            printf("\\");
        }
        printf("%c", c);
    }
}
