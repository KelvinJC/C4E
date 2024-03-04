/*
To illustrate more aspects of pointers and arrays 
by studying two useful functions from the standard I/O library. 

The first function is strcpy(s, t), 
which copies the string t to the string s. 
The arguments are written in this order by analogy to assignment, 
where one would say s = t to assign t to s.
*/

// -- Array version
void strcpy(char s[], char t[]) { /* copy t to s */
    int i;

    i = 0;
    while ((s[i] = t[i]) != '\0') {
        i++;
    }
}

// -- Pointers version
void strcpy1(char *s, char *t) { /* copy t to s; pointer version 1 */
    while ((*s = *t) != '\0') {
        s++;
        t++;
    }
}

// Pointers version 2
void strcpy2(char *s, char *t) { /* copy t to s; pointer version 2 */
    while ((*s++ = *t++) != '\0')
    ;
}

// Pointers version 3
void strcpy3(char *s, char*t) { /* copy t to s; pointer version 3 */
    while (*s++ = *t++)
    ;
}