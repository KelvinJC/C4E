# include <stdio.h>

int main() { /* test power function */
    int i;
    int power();

    printf("   n    2^n    -3^n\n");
    for (i = 0; i < 10; ++i)
        printf("%4d %5d  %6d\n", i, power(2,i), power(-3,i));
}

int power(x, n) /* raise x to the n-th power; n > 0 */
int x, n;
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * x;
    return (p);
}