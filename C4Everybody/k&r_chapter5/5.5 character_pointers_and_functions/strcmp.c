/*
To illustrate more aspects of pointers and arrays 
by studying two useful functions from the standard I/O library. 

The first function is strcpy(s, t), 
while the second is strcmp(s, t)
which compares the character strings s and t, and returns negative, zero or positive 
according as s is lexicographically less than, equal to, or greater than t. 
The value returned is obtained by subtracting 
the characters at the first position where s and t disagree.
*/

// -- Array version
int strcmp(char s[], char t[]) { /* return <0 if s < t, 0 if s == t, >0 if s > t */ 
    int i;
    i = 0;

    while (s[i] == t[i]) {
        if (s[i++] == '\0') {
            return(0);
        }
    }
    return(s[i] - t[i]);
}

// -- Pointer version
int strcmp1(char *s, char *t) {

    for ( ; *s = *t; s++, t++) {
        if (*s == '\0') {
            return(0);
        }
    }
    return(*s - *t);
}