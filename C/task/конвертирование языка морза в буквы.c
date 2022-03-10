#include <stdio.h>

void vvod( char *a, char *b, char *c, char *d, int *count, int *count2, int *count3, int *count4, char *e, int *count5 );
void morse_code( char *a, char *b, char *c, char *d, int *count3, int *count4, char *e, int *count5 );

// count - не - и не *
// count2 - перенос строки
// count3 - пробел
// count4 - проверка, чтобы ввод символов не превышал 5
// count5 - проверка количества пробелов

int main() {

    char a = '\0', b = '\0', c = '\0', d = '\0', e = '\0';
    int count = 1, count2 = 1, count3 = 1, count4 = 0, count5 = 0;

    while ( 1 ) {

        vvod( &a, &b, &c, &d, &count, &count2, &count3, &count4, &e, &count5 );

        if (count == 0 ) {
            
            printf("n/a");
            break;

        }

        morse_code( &a, &b, &c, &d, &count3, &count4, &e, &count5 );

        if ( count2 == 0 ) {
            break;
        }

    }

    return 0;

}
void morse_code( char *a, char *b, char *c, char *d, int *count3, int *count4, char *e, int *count5 ) {

    if ( *a == '*' && *b == '-' && *c == '\0' && *d == '\0' && *e == '\0' ) printf( "A" );
    else if ( *a == '-' && *b == '*' && *c == '*' && *d == '*' && *e == '\0' ) printf( "B" );
    else if ( *a == '-' && *b == '*' && *c == '-' && *d == '*' && *e == '\0' ) printf( "C" );
    else if ( *a == '-' && *b == '*' && *c == '*' && *d == '\0' && *e == '\0' ) printf( "D" );
    else if ( *a == '*' && *b == '\0' && *c == '\0' && *d == '\0' && *e == '\0' ) printf( "E" );
    else if ( *a == '*' && *b == '*' && *c == '-' && *d == '*' && *e == '\0' ) printf( "F" );
    else if ( *a == '-' && *b == '-' && *c == '*' && *d == '\0' && *e == '\0' ) printf( "G" );
    else if ( *a == '*' && *b == '*' && *c == '*' && *d == '*' && *e == '\0' ) printf( "H" );
    else if ( *a == '*' && *b == '*' && *c == '\0' && *d == '\0' && *e == '\0' ) printf( "I" );
    else if ( *a == '*' && *b == '-' && *c == '-' && *d == '-' && *e == '\0' ) printf( "J" );
    else if ( *a == '-' && *b == '*' && *c == '-' && *d == '\0' && *e == '\0' ) printf( "K" );
    else if ( *a == '*' && *b == '-' && *c == '*' && *d == '*' && *e == '\0' ) printf( "L" );
    else if ( *a == '-' && *b == '-' && *c == '\0' && *d == '\0' && *e == '\0' ) printf( "M" );
    else if ( *a == '-' && *b == '*' && *c == '\0' && *d == '\0' && *e == '\0' ) printf( "N" );
    else if ( *a == '-' && *b == '-' && *c == '-' && *d == '\0' && *e == '\0' ) printf( "O" );
    else if ( *a == '*' && *b == '-' && *c == '-' && *d == '*' && *e == '\0' ) printf( "P" );
    else if ( *a == '-' && *b == '-' && *c == '*' && *d == '-' && *e == '\0' ) printf( "Q" );
    else if ( *a == '*' && *b == '-' && *c == '*' && *d == '\0' && *e == '\0' ) printf( "R" );
    else if ( *a == '*' && *b == '*' && *c == '*' && *d == '\0' && *e == '\0' ) printf( "S" );
    else if ( *a == '-' && *b == '\0' && *c == '\0' && *d == '\0' && *e == '\0' ) printf( "T" );
    else if ( *a == '*' && *b == '*' && *c == '-' && *d == '\0' && *e == '\0' ) printf( "U" );
    else if ( *a == '*' && *b == '*' && *c == '*' && *d == '-' && *e == '\0' ) printf( "V" );
    else if ( *a == '*' && *b == '-' && *c == '-' && *d == '\0' && *e == '\0' ) printf( "W" );
    else if ( *a == '-' && *b == '*' && *c == '*' && *d == '-' && *e == '\0' ) printf( "X") ;
    else if ( *a == '-' && *b == '*' && *c == '-' && *d == '-' && *e == '\0' ) printf( "Y" );
    else if ( *a == '-' && *b == '-' && *c == '*' && *d == '*' && *e == '\0' ) printf( "Z" );
    else if ( *a == '-' && *b == '-' && *c == '-' && *d == '-' && *e == '-' ) printf( "0" );
    else if ( *a == '*' && *b == '-' && *c == '-' && *d == '-' && *e == '-' ) printf( "1" );
    else if ( *a == '*' && *b == '*' && *c == '-' && *d == '-' && *e == '-' ) printf( "2" );
    else if ( *a == '*' && *b == '*' && *c == '*' && *d == '-' && *e == '-' ) printf( "3" );
    else if ( *a == '*' && *b == '*' && *c == '*' && *d == '*' && *e == '-' ) printf( "4" );
    else if ( *a == '*' && *b == '*' && *c == '*' && *d == '*' && *e == '*' ) printf( "5" );
    else if ( *a == '-' && *b == '*' && *c == '*' && *d == '*' && *e == '*' )  printf( "6" );
    else if ( *a == '-' && *b == '-' && *c == '*' && *d == '*' && *e == '*' ) printf( "7" );
    else if ( *a == '-' && *b == '-' && *c == '-' && *d == '*' && *e == '*' ) printf( "8" );
    else if ( *a == '-' && *b == '-' && *c == '-' && *d == '-' && *e == '*' ) printf( "9" );
    else if ( *count5 <= 1 ) printf( "@" );

    *count4 = 0;
    *count3 = 1;

    *a = '\0';
    *b = '\0';
    *c = '\0';
    *d = '\0';
}

void vvod( char *a, char *b, char *c, char *d, int *count, int *count2, int *count3, int *count4, char *e, int *count5 ) {
    
    char X;

    while ( 1 ) {

        if ( *count4 > 5 ) {

            *count = 0;
            break;

        }

        X = getchar();

        if ( X == '-' || X == '*' ) {

            *count4 = *count4 + 1;

            if ( *a == '\0' ) *a = X;
            else if ( *b == '\0' ) *b = X;
            else if ( *c == '\0' ) *c = X;
            else if ( *d == '\0' ) *d = X;
            else if ( *e == '\0' ) *e = X;

        }

        else if ( X == '\n' ) {
            
            *count2 = 0;
            break;

        }

        else if ( X == ' ' ) {

            *count3 = 0;
            *count5 = *count5 + 1;

            break;

        }

        else {

            *count = 0;

            break;

        }

    }

}
