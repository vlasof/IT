#include <stdio.h>
    int main() {
    int i, N;
    int you; //ввод чисел
    int success = 1; //успех 0 или 1
    int counter; //счётчик
    printf("How many numbers do you want to lead?\n");
    counter = scanf("%d", &N);
    if (counter != 1) {
        printf("n/a");
        success = 0;
    }
    if (success == 1) {
        int arr[N];
                printf("Enter numbers:\n");
        //вод чисел в массив
        for (i = 0; i < N; i++) {
            counter = scanf("%d", &you);
            arr[i] = you;
            if (counter != 1) {
                printf("n/a");
                success = 0;
                break;
            }
        }
        
        //вывод чётных чисел
        if (success == 1) {
            printf("even: ");
            for (i = 0; i < N; i++) {
                if (arr[i]%2 == 0)
                printf("%d ", arr[i]);
            }
            printf("\n");
            //вывод нечётных чисел
            printf("odd: ");
            for (i = 0; i < N; i++) {
                if (arr[i]%2 != 0)
                printf("%d ", arr[i]);
            }
        }
    }
}


