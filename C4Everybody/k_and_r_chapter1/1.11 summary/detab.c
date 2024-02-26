/*
Exercise 1-19. 
Write a program detab which replaces tabs in the input 
with the proper number of blanks to space to the next tab stop. 
Assume a fixed set of tab stops, say every n positions.
*/


#include <stdio.h>
#define MAX_INPUT_LENGTH 1000
#define MAX_OUTPUT_LENGTH 1600
#define NUM_BLANKS 4



void main() {
    int get_line();
    void detab();
    int len;
    char line[MAX_INPUT_LENGTH];
    char detabbed[MAX_OUTPUT_LENGTH];

    // while ( (len = get_line(line, MAX_INPUT_LENGTH)) > 0 ) {
    //     detab(line, detabbed);
    // }
    // printf("%s\n", detabbed);

    detab("Hello\tworld. Have a nice\tday\n", detabbed);
    printf("%s\n", detabbed);

}


int get_line(current_line, line_length_limit) 
char current_line[];
int line_length_limit; 
{
    int i, c;

    for (i = 0; i < line_length_limit && (c = getchar()) != EOF && c != '\n'; ++i )
        current_line[i] = c;
    if (c == '\n') {
        current_line[i] = c;
        ++i;
    }
    return (i);
}


void detab(input, detabbed_line) char input[], detabbed_line[]; {
    int i, j, last;

    for (i = 0, last = 0; input[i] != '\0'; ++i ) {
        if (input[i] == '\t') {
            printf("t found\n");

            for (j = 0; j <= NUM_BLANKS; ++j) {
                detabbed_line[last++] = ' ';
            }
        } 
        else {
            detabbed_line[last++] = input[i];
        }
    }
    detabbed_line[last] = '\0';
}
