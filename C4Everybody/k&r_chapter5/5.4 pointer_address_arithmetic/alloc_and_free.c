/*
There are two routines: 
- alloc(n) returns a pointer p to n consecutive character positions, 
  which can be used by the caller of alloc for storing characters;

- free(p) releases the storage thus acquired so it can be later re-used.
*/


#include <stdio.h>
#define NULL 0 /* pointer value for error report */
#define ALLOCSIZE 1000 /* size of available space */

static char allocbuf[ALLOCSIZE]; /* storage for alloc */
static char *allocp = allocbuf;  /* next free position */


char *alloc(int n) { /* return pointer to n characters */
    if (allocp + n <= allocbuf + ALLOCSIZE) { /* fits */
        allocp += n;
        return(allocp - n); /* old p */
    }
    else { /* not enough room */
        return(NULL);
    }
} 


void free(char *p) { /* free storage pointed to by p */
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE) {
        allocp = p;
    }
} 


