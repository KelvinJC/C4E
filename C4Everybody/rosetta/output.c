# include <stdio.h>
/* I am a comment*/

/*
### Python ### 
print('Hello world)
print('Answer', 42)
print('Name', 'Sarah')
print('x',3.5,'i',10)
*/


/* ### C ###*/

int main() {
    printf("Hello world\n");
    printf("Answer %d\n", 42);         /* d is standing in for an integer */
    printf("Name %s\n", "Sarah");      /* s is standing in for a character array */ 
    printf("x %.1f i %d\n", 3.5, 100); /* .1f is standing in for a floating point number with one degree of precision */
    return 0;
}