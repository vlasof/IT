#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n/100 + n%100/10 + n%10);
}