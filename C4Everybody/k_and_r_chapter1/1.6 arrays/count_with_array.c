# include <stdio.h>

int main() { /* count digits, white space, others */

    int c, i, num_white, num_other;
    int num_digit[10]; // declare an array of 10 integers, empty at this point

    num_white = num_other = 0;

    // assign 0 to all indices in the empty array
    for (i = 0; i < 10; ++i)
        num_digit[i] = 0;

    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++num_digit[c - '0']; /* arithmetic involving char's and int's converts everything to int */
        else if (c == ' ' || c == '\n' || c == '\t')
            ++num_white;
        else
            ++num_other;

    for (i = 0; i < 10; ++i)
        if (num_digit[i] > 1 || num_digit[i] == 0)
            printf("%d occurred %d times\n", i, num_digit[i]);
        else  
            printf("%d occurred %d time\n", i, num_digit[i]);
        

    printf("\nwhite space = %d, \nother = %d\n", num_white, num_other);
}