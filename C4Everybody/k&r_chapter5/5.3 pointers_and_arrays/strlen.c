/*
When an array name is passed to a function, 
what is passed is the location of the beginning of the array. 
Within the called function, this argument is a variable, 
just like any other variable, and so an array name argument is truly a pointer, 
that is, a variable containing an address. 
We can use this fact to write a new version of strlen, 
which computes the length of a string.
*/

int strlen(char *str) { /* return length of string */
    int n;

    for (n = 0; *str != '\0'; str++)
        n++;
    return(n);
}


/*
Incrementing str is perfectly legal, since it is a pointer variable; 
str++ has no effect on the character string in the function that called strlen, 
but merely increments strlen's private copy of the address.

As formal parameters in a function definition, `char str[];` and `char *str;`  are exactly equivalent;
*/
