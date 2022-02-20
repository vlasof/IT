#include <stdio.h>  // Для printf
#include <string.h> // Для strstr
int main (void) {
   // Массив со строкой для поиска
   char str1 [11];
   // Набор символов, которые должны входить в искомый сегмент
   char str2 [10];
   // Переменная, в которую будет занесен адрес первой найденной строки
   char *istr;
   scanf("%s", str1);
   scanf("%s", str2);
   //Поиск строки
   istr = strstr (str1,str2);

   //Вывод результата поиска на консоль
   if ( istr == NULL) printf ("Строка не найдена\n");
   else printf ("Искомая строка начинается с символа %d\n",istr-str1+1);
}
