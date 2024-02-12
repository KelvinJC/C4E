# include <stdio.h>



int main() {
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;                                /* empty body of for loop is executed. See note below */
    printf("%.0f\n", nc);                /* %.0f == A float of unrestricted number of digits but having a decimal point of one place */
}

/*
The body of the for loop here is empty, 
because all of the work is done in the test and re-initialization parts. 
But the grammatical rules of C require that a for statement have a body. 
The isolated semicolon, technically a null statement, is there to satisfy that requirement. 
We put it on a separate line to make it more visible.
*/
