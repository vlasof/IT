#include <stdio.h>  // Для printf
#include <string.h> // Для strcat
int main (void) {
    // Массив источник данных
    char app[1024]= "вторая строка";
 
    // Массив приемник данных
    char dst[1024]="первая строка ";

    // Добавляем строку из массива src в массив dst. 
    strcat(dst, app); //strcat(куда добавить, что добавить)

    // Вывод массива dst на консоль
    printf ("dst: %s\n", dst);
    printf ("app: %s\n", app);
}
