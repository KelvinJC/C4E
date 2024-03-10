/* 
Predict the output of the following program
*/

#include <stdio.h>

// void main() {
//     int i = 1;
//     int *p = &i;
//     q = p;
//     *q = 5;
//     printf("%d", *p);
// }


/*
I predicted an error in compilation.

Test ran the program and the output of compilation was as follows:

--- test_output.c: In function 'main':
--- test_output.c:6:5: error: 'q' undeclared (first use in this function)
---      q = p;
---      ^
--- test_output.c:6:5: note: each undeclared identifier is reported only once for each function it appears in


To eliminate the error in the output, the program should be corrected to the following code
where the pointer q is first delared before initialisation:
*/

void main() {
    int i = 1;
    int *p = &i;
    int *q;
    q = p;
    *q = 5;
    printf("%d", *p);
}

/*
The output of the above program would be 5 
since the integer value referenced by the pointer q has been modified to 5 
just before the printf statement 
*/