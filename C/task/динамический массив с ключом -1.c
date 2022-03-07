#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr = NULL;
    int n = 0, N, count = 1;
    arr = malloc(sizeof(int));
    while (1) {
        if (scanf("%d", &N) == 1) {
            arr[n] = N;
            n++;
            arr = realloc(arr, sizeof(int) * n);
        } else {
            printf("n/a");
            count = 0;
            break;
        }
        if (N == -1) break;
    }
    if (count == 1) for (int i = 0; i < (n-1); i++) printf("%d ", arr[i]);
    free(arr);
}
