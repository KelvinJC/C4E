# include <stdio.h>

/*
### Python ###

def mymult(a,b):
    c = a * b
    return c

retval = mymult(6,7)
print('Answer:', retval)
*/


int main() {
    int mymult();
    int retval;

    retval = mymult(6,7);
    printf("Answer: %d\n", retval);
}

int mymult(a, b)
    int a, b; /* declare the type of the parameters expected*/
{
    int c = a * b;
    return c;
}