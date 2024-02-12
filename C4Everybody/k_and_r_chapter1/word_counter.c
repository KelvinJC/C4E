# include <stdio.h>

# define YES 1 
# define NO  0


int main() { /* Count lines, words, characters in input */
    int c, nl, nw, nc, inword;

    inword = NO;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t' )
            inword = NO;
        else if ( inword == NO ) {
            inword = YES;
            ++nw;
        }
    }

    printf(" Number of lines: %d,\n Number of words: %d,\n Number of characters: %d", nl, nw, nc);
    
}