#include <stdio.h>
#define BUFSIZE 100

char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0; /* next free position in buf */


void main() {
    int get_int();
    int digit;
    
    get_int(&digit);
    printf("Number is: %d \n", digit);
}

int get_int(int *pn) {  /* get next integer from input */
    
    int c, sign;
    char getch();
    void ungetch();


    while ((c = getch()) == ' ' || c == '\n' || c == '\t')
    ; /* skip white space */
    
    sign = 1;
    if (c == '+' || c == '-') { /* record sign */
        sign = (c == '+') ? 1 : -1;
        c = getch();
    }

    for (*pn = 0; c >= '0' && c <= '9'; c = getch()) {
        *pn = 10 * *pn + c - '0';
    }

    *pn *= sign;
    if (c != EOF) {
        ungetch(c);
    }
    return(c);
}


char getch() /* get a (possibly pushed back) character */ {
  return((bufp > 0) ? buf[--bufp] : getchar());
}

void ungetch (int c) /* push character back on input */ {
  if (bufp > BUFSIZE)
    printf("ungetch: too many characters\n");
  else
    buf[bufp++] = c;
}

