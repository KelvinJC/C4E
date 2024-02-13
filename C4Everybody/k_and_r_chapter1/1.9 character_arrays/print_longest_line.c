# include <stdio.h>

/*
Probably the most common type of array in C is the array of characters. 
To illustrate the use of character arrays, and functions to manipulate them, 
let's write a program which reads a set of lines and prints the longest. 
The basic outline is simple enough:

while (there's another line)
    if (it's longer than the previous longest)
        save it and its length
print longest line

This outline makes it clear that the program divides naturally into pieces. 
One piece gets a new line, another tests it, another saves it, 
and the rest controls the process.


*/

#define MAXLINE 1000 /* maximum input line size */

int main() {
    int len;            /* current line length */
    int max;            /* maximum length seen so far */
    char line[MAXLINE]; /* current input line so far */
    char longest_line[MAXLINE]; /* longest line saved */
    int get_line();
    int copy();

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) // line - a character array - is passed by reference; MAXLINE - a single value integer - is passed by value
        if (len > max) {
            max = len;
            copy(line, longest_line);
        }
    if (max > 0) /* there was a line */
        printf("The longest line has %d characters. Here it is: \n%s", max, longest_line);
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

int copy(current_line, longest_line_saved) /* copy current_line to longest_line_saved; assume longest_line_saved big enough */
char current_line[], longest_line_saved[];
{
    int i;

    i = 0;
    while ((longest_line_saved[i] = current_line[i]) != '\0') {
        ++i;
    } 
}