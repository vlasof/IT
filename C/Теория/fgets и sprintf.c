#include <stdio.h>
int main() {
    int age;
    char name[30], country[30], details[100];

    printf("Enter your name: ");
    fgets(name, 30, stdin);

    printf("Enter your country: ");
    fgets(country, 30, stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    sprintf(details, "Name: %s Age: %d  Country: %s ", name, age, country);
    printf("details: \n\n %s", details);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int a = 23123;
//     char arr[100];
//     sprintf(arr, "%i", a); //куда записать - тип - что записать
//     printf("%s", arr);
// }
