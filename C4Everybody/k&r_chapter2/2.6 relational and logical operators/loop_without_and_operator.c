# include <stdio.h>

/*
Exercise 2-1. 
Write a loop equivalent to the for loop below without using &&.

for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
     s[i] = c;
*/

# define MAX_LINE_LENGTH 100

int main () {
    int i, c;
    int lim;
    char s[MAX_LINE_LENGTH];

    i = 0;
    while (i < lim - 1) {
        c = getchar();
        if (c == '\n') {
            break;
        }
        if (c == 'EOF') 
            break;
            
        s[i] = c;
        ++i;
    }
}
