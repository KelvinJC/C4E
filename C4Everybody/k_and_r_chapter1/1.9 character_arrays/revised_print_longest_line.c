# include <stdio.h>

/*
Exercise 1-14. 
Revise the main routine of the longest-line program 
so it will correctly print the length of arbitrarily long input lines, 
and as much as possible of the text.
*/

#define MAXLINE 1000 /* maximum input line size */
# define PRINTLINELIMIT 100

void main() {
    int len;                    /* current line length */
    int max;                    /* maximum length seen so far */
    char line[MAXLINE];         /* current input line so far */
    char longest_line[MAXLINE]; /* longest line saved */
    int get_line();
    void copy();

    void print_current_line();
    char printline[PRINTLINELIMIT];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) { // line - a character array - is passed by reference; MAXLINE - a single value integer - is passed by value
        if (len > max) {
            max = len;
            copy(line, longest_line);
        }

        printf("\nLength of line: %d\n", len);
        print_current_line(line, printline, PRINTLINELIMIT);
    }

    if (max > 0) /* there was a line */{
        printf("The longest line has %d characters. Here it is: \n%s", max, longest_line);
    }
}


int get_line(current_line, limit) /* get input line into current_line, return its length */
char current_line[];
int limit;
{
    int c, i;

    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        current_line[i] = c;
    if (c == '\n') {
        current_line[i] = c;
        ++i;
    }
    current_line[i] = '\0';

    return(i);
}


void copy(current_line, longest_line_saved) /* copy current_line to longest_line_saved; assume longest_line_saved big enough */
char current_line[], longest_line_saved[];
{
    int i;

    i = 0;
    while ((longest_line_saved[i] = current_line[i]) != '\0') {
        ++i;
    } 
}


void print_current_line(line, output_line, limit)
char line[], output_line[];
int limit;
{
    int i, c;

    i = 0;
    while (i < (limit - 1) && (output_line[i] = line[i]) != '\0' ) {  
        ++i;
    }
    if (i < (limit - 1)) 
        printf("%s\n", output_line);
    else 
        printf("%s ...\n", output_line);
}

