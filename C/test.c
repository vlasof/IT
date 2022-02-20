#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int x, y;//box
int xx, yy;//dog
int arr[10][20];
int appx, appy;
char key;
int count;
void ravno(int *xx, int *yy, int *appx, int *appy, int *count) {
    srand(time(NULL));
    *xx = 1 + rand()%(9);
    *yy = 1 + rand()%(19);
    *appx = 1 + rand()%(9 - 1 + 1);
    *appy = 1 + rand()%(19 - 1 + 1);
    *count = 0;
}
void drawbox(int xx, int yy, int x, int y, int arr[10][20], int appx, int appy, int count) {
    for (x = 0; x <= 10; x++) {
        for (y = 0; y <= 20; y++) {
            arr[x][y] = ' ';//space
            arr[0][y] = '#';//wall
            arr[10][y] = '#';//wall
            if (y == 0 || y == 20) arr[x][y] = '#';//wall
            arr[xx][yy] = '@';//dog
            arr[appx][appy] = '*';//apple
            printf(" %c", arr[x][y]);
        }
        printf("\n");
    }
    printf("Picked apples: %d\n", count);
}
void movedog(int *xx, int *yy, char *key) {
    if (*xx == 0) *xx = *xx + 1;
    if (*xx == 10) *xx = *xx - 1;
    if (*yy == 0) *yy = *yy + 1;
    if (*yy == 20) *yy = *yy - 1;
    if (*key == 's' || *key == 'S') *xx = *xx + 1;
    if (*key == 'w' || *key == 'W') *xx = *xx - 1;
    if (*key == 'a' || *key == 'A') *yy = *yy - 1;
    if (*key == 'd' || *key == 'D') *yy = *yy + 1;
}
void apple(int *appx, int *appy, int xx, int yy, int *count) {
    if (*appx == xx && *appy == yy) {
        *appx = 1 + rand()%(9 - 1 + 1);
        *appy = 1 + rand()%(19 - 1 + 1);
        *count = *count + 1;
    }
}
int main(int appx, int appy, int count) {
    ravno(&xx, &yy, &appx, &appy, &count);

    while(1) {
        drawbox(xx, yy, x, y, arr, appx, appy, count);
        if (count == 3) break;
        scanf("%c", &key);
        movedog(&xx, &yy, &key);
        apple(&appx, &appy, xx, yy, &count);
        if (key == 'e' || key == 'E') break;
    }
}
