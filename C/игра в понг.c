#include <stdio.h>
int check_game (int a, int b);
int racket (int a, int b, char c);
int draw (int player1, int player2, int os_x, int os_y);
int ball (int a, int b,int player1, int player2);
int count_bx = 0, count_by = 1;
int os_x = 40, os_y = 12;
int check = 1;
int count1 = 0, count2 = 0;
int player1 = 11, player2 = 11;
int main() {
    while (check) {
        check_game(count1, count2);
        draw (player1,player2, os_x, os_y );
        char c = getchar();
        //system("clear"); 
        racket (player1, player2, c);
        ball(os_x,os_y,player1,player2);
        printf ("Игрок 1: %d Игрок 2: %d",count1,count2) ;
    }
}
int racket (int a,int b, char c) {
    if (c == 'a' && a >= 3 || c == 'A' && a >= 3) {
        a = a - 1;
        player1 = a;
    }
    else if (c == 'z' && a <= 22 || c == 'Z' && a <= 22) {
        a = a + 1;
        player1 = a;
    }
    else if (c == 'k' && b >= 3 || c == 'K' && b >= 3) {
        b = b - 1;
        player2 = b;
    }
    else if (c == 'm' && b <= 22 || c == 'M' && b <= 22) {
        b = b + 1;
        player2 = b;
    }
}
int check_game (int a, int b) {
    count1 = a;
    count2 = b;
    if (a == 21 || b == 21) check = 0;
}
int draw (int player1, int player2,int os_x, int os_y) {
    for (int i = 0; i <= 25; i++) {
        printf("\n");
        for(int j = 0; j <= 80; j++) {
            if(i == 0 || i ==25)
            printf("▇");
            else if (i == os_y && j == os_x) printf("о");
            else if (i == (player1-1) && j == 0 || i == player1  && j == 0 || i == (player1 +1) && j == 0) printf("▇");
            else if (i == (player2-1) && j == 80 || i == player2 && j == 80 || i == (player2 +1) && j == 80) printf("▇");
            else if ( j == 40) printf ("|");
            else printf (" ");
        }
    }
}
int ball(int a, int b,int player1, int player2) {
    if (b == player1 && a == 1 || b == (player1+1) && a == 1 || b == (player1+2) && a == 1 ) {
        if (count_bx == 0) count_bx = 1;
        else count_bx = 0;
    }
    if (b == player2 && a == 79 || b == (player2+1) && a == 79 || b == (player2+2) && a == 79 ) {
        if (count_bx == 0) count_bx = 1;
        else count_bx = 0;
    }
    if (a == 0) count2= count2 + 1;
    else if (a == 80) count1 = count1 + 1;
    if (a > 79) count_bx = 3;
    if (count_bx == 3) {
        os_x = 11;
        count_bx = 1;
    }
    if (a < 1) count_bx = 3;
    if (count_bx == 3) {
        os_x = 11;
        count_bx = 0;
    }
    if (count_bx == 0 ) os_x = a + 1;
    else  if (count_bx == 1 ) os_x = a - 1;
    if (b == 1 ) count_by = 0;
    else if (os_y == 24) count_by = 1;
    if (count_by == 0) os_y = b + 1;
    else  if (count_by == 1) os_y = b - 1;
}     
