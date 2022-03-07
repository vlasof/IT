#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define SIZE 100
int quests1(char arr[SIZE]);
int quests2(char arr[SIZE]);
int quests3(char arr[SIZE]);
int quests4(char arr[SIZE]);
int quests5(char arr[SIZE]);
char arr[SIZE];
int i, sym, count = 0, result = 0;
int main() {
    quests1(arr);
    quests2(arr);
    quests3(arr);
    quests4(arr);
    quests5(arr);
}
int quests1(char arr[SIZE]) {//Записать строку с помощью ввода с клавиатуры и вывести её на экран
    printf("Write a word or a sentence! (word limit - 100)\n");
    fgets(arr, SIZE, stdin);
    //scanf("%[^\n]", arr);//вводим текст
    //system("chcp 1251"); - адекватное отображение кириллицы в консоли 
    system("clear");
    printf("Your text: %s\n", arr);
}
int quests2(char arr[SIZE]) {//Посчитать количество символов в строке и вывести это число на экран
    int i, result;
    printf ("Number of characters with space = %ld\n", strlen (arr));
    int a = strlen (arr);
        for (int i = 0; i < SIZE; i++) {//проверка на количества пробелов в тексте
        if (arr[i] == ' ') result--;
    }
    printf("Number of characters without space = %d\n\n", a + result);
    sleep(2);
} 
int quests3(char arr[SIZE]) {//Ввести с клавиатуры букву, выполнить поиск по строке, показать пользователю сколько таких символов записано в строке
    int sym;
    int count = 0;
    int i;
    printf("Enter the character that you want to find: ");
    sym = getchar();
    for (i = 0; i < SIZE; i++) if (arr[i] == sym) count++;
    printf("\nIn the line: ");
    puts(arr);//Вывод строки
    printf("symbol \"");
    putchar(sym);//Вывод символа
    printf("\" is found %d times\n", count);
}
int quests4(char arr[SIZE]) {//Ввести фразу, выполнить поиск по строке и показать пользователю число, с которой, от начала строки, начинается данная фраза
    char arr2[SIZE];
    printf("Enter the character or word you want to find: ");
    scanf("%s", arr2);
    char arrr[SIZE];
    memccpy(arrr, arr, '\0', SIZE);
    //Поиск строки
    char *X;
    int j = 0;
    while (X != NULL) {
        X = strstr (arrr,arr2);
        if (X == NULL && j != 1) printf ("There\'s nothing found!\n");
        if (X != NULL) {
            printf ("The search string starts with a character %ld\n",X - arrr+1);
            arrr[X - arrr+1] = '0';
            j = 1;
        }
        if (j == 1 && X == NULL) printf("Read the data above!");
    }
}
int quests5(char arr[SIZE]) {//Ввести с клавиатуры два числа, вывести на экран отрывок слова, заходя слева, длиной первого числа. Вывести на экран отрывок слова, заходя справа
    int L, R;
    arr[SIZE] = '\0';
    printf("\n\n");
    printf("Your text: %s\n", arr);
    printf("Сколько символов ты хочешь вывести слева?\n");
    scanf("%d", &L);
    printf("Сколько символов ты хочешь вывести справо?\n");
    scanf("%d", &R);
    printf("\nТвой текст: ");
    //left
    for (i = 0; i < L; i++) printf("%c", arr[i]);
    printf(" ");
    //right
    for (R < SIZE; R++;) {
        printf("%c", arr[R]);
        if (R == '\0') break;
    }
    //strlen() возвращает длину строки.
    //strcmp() сравнивает две строки.
    //strcpy() копирует строки. 
    //char *gets(char *s) - читает множество символов до  первого '\n', 
}
