#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);
int output(int *a, int *n);
int sort(int *a, int *n);

int main() {
    int data[NMAX], n;

    if (input(data, &n)) {
        sort(data, &n);
        output(data, &n);
    }

    return 0;
}

int input(int *a, int *n) {
    char chr;
    scanf("%d", n);
    int success = 1;

    if (*n < 1 || *n > NMAX) {
        printf("n/a");
        success = 0;
    }

    if (success == 1) {
        int counter;
        int checker;
        checker = 0;
        counter = 0;

        for (int *p = a; p - a < *n; p++) {
            chr = '\0';
            checker = scanf("%d%c", p, &chr);
            counter += checker;
            if ((chr != '\n' && chr != ' ') || checker == 0 || !success) {
                printf("n/a");
                success = 0;
                break;
            }
        }
        if (success) {
            if (counter / 2 < *n) {
                printf("n/a");
                success = 0;
            }
        }
        
    }
    return success;
}

int output(int *a, int *n) {
    for (int *p = a; p - a < *n; p++) {
        if (p == a + *n - 1) {
            printf("%d", *p);
            continue;
        }
        printf("%d ", *p);
    }

    return 0;
}

int sort(int *a, int *n) {
    for (int i = 1; i < *n; i++) {  // Обход массива
        int k = i;
        while (k > 0 && a[k - 1] > a[k]) {
            int tmp = a[k - 1];
            a[k - 1] = a[k];
            a[k] = tmp;
            k--;
        }
    }
    return 0;
}