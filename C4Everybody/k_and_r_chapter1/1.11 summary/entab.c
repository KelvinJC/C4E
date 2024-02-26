/*
Exercise 1-20. 
Write the program entab which replaces strings of blanks
by the minimum number of tabs and blanks to achieve the same spacing. 
Use the same tab stops as for detab.
*/


#include <stdio.h>
#define MAX_INPUT_LENGTH 1000
#define MAX_OUTPUT_LENGTH 1600
#define NUM_BLANKS 4


void main() {
    void entab();
    char line[MAX_INPUT_LENGTH];
    char entabbed[MAX_OUTPUT_LENGTH];

    entab("Hello            world.       Have    a       nice day  \n", entabbed);
    printf("%s\n", entabbed);
}


void entab(input, entabbed_line) char input[], entabbed_line[]; {
    int i, j, k, last;

    for (i = 0, last = 0, j = 0; input[i] != '\0'; ++i) {
        if (input[i] == ' ') {
            ++j;
            if (j % 4 == 0) {        // when fourth blank is found replace with tab   
                entabbed_line[last++] = '\t';
            }
        }
        else if (input[i] == '\n') { // match number of blanks in input just before end of line
            if (j > 4 || j > 0) {
                for (k = j; k % 4 != 0; --k) {
                    entabbed_line[last++] = ' ';
                }
            }
        }
        else {    // match number of blanks in input not up to NUM_BLANKS
            if (j > 4 || j > 0) { 
                for (k = j; k % 4 != 0; --k) {
                    entabbed_line[last++] = ' ';
                }
            }
            entabbed_line[last++] = input[i];
            j = 0;
        }
    }
    entabbed_line[last] = '\0';
}