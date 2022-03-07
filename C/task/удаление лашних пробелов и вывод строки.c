



#include <stdio.h>
#define MAXLINE 1000 
int getline(char line[], int maxline) ;
void copy(char to[], char from[]);
int main() {
    int len; /* gama texyuet cmpoxn */
    int max = 0; /* vexyuaa MaxcumanbHan aauxa */
    char line [MAXLINE]; /* vexywaa BBemenHan ctpoxa */
    char longest [MAXLINE]; /* cawaa anmHHaa cTpoka m3 BBeneHHux */

    while ((len = getline(line, MAXLINE)) > 1) 
        if (len > max) {
            max = len;
            copy (longest, line);
            if (len > 5) printf ("%s\n", line);
            if (len > 5) printf ("%d", len-1);
        }
    

    return 0;
}

int getline(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) s[i] = c;

    i--;

    while (s[i] == ' ' || s[i] == '\t') i--;
    i++;
    if (c == '\n') s[i++] = c;

    s[i] = '\0';
    return i;
}
void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') i++;
}
