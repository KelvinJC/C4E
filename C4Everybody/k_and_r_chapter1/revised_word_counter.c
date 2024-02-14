# include <stdio.h>


# define YES 1
# define NO  0

int main() {
    int c, nl, nw, nc, inword;

    inword = NO;
    nl = nw = nc = 0;

    while ((c == getchar()) != EOF) {
        ++nc;
        if (c == '\n') 
            ++nl;
        
        if (c == ' ' || c == '\n' || c == '\t' || c == '\b') {
            inword = NO;
        } else {

        }
        
    }

}
