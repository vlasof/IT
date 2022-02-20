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
            if (getchar() == '\n') break;
            arr = realloc(arr, sizeof(int) * n);
        } else {
            printf("2n/a");
            count = 0;
            break;
        }
    }
    int max = arr[0];
    for (int i = 0; i < n; i++) if (max < arr[i]) max = arr[i];
    if (count == 1) printf("%d", max);
    free(arr);
}
