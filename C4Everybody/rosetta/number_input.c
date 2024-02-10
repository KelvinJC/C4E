# include <stdio.h>

/*
### Python ###
print('Enter US Floor')
usf = int(input())
euf = usf - 1
print('EU Floor', euf)
*/



/* ### C ###*/

int main() {
    int usf, euf;
    printf("Enter US Floor\n");
    scanf("%d", &usf);
    euf = usf - 1;
    printf("EU Floor %d\n", euf);
}