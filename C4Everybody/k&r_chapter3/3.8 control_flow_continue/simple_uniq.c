/*

Exercise 3-6. 
Write a program which copies its input to its output, 
except that it prints only one instance from each group of adjacent identical lines.
(This is a simple version of the UNIX utility uniq.)

# Pseudocode aka plan of solution
1    get line
2    store first line in cache
3    get second line
4    compare first char of second line with first char of first line
5    if same compare both lines
6    if two lines are identical
7    throw away second line
8    repeat 3 - 7 until new line found
9    when new line found go to 2 and restart the process by comparing with the subsequent line again

# functions to write
cache function
compare first chars function
compare lines function
save non duplicate line to cache

*/

#include <stdio.h>
#define ARRAY_STORE 10000
#define LINE_LENGTH_LIMIT 1000


void main() {
    int copy_to_array();
    int get_line();
    int compare_lines();
    void copy_to_cache();

    int index_last_saved = 0;
    char output_array[ARRAY_STORE];
    char cached_line[LINE_LENGTH_LIMIT];
    char line[LINE_LENGTH_LIMIT];

    while ( get_line(line, LINE_LENGTH_LIMIT) > 0 ) {
        if (index_last_saved == 0) {
            copy_to_cache(line, cached_line);
            index_last_saved = copy_to_array(line, index_last_saved, output_array);
            continue;
        }
        else {
            if ( compare_lines(line, cached_line) ) {
                continue;
            }
            else {
                copy_to_cache(line, cached_line);
                index_last_saved = copy_to_array(line, index_last_saved, output_array);
                continue;
            }
        }
    }
    printf("%s", output_array);
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


int compare_lines(line, cache) char line[], cache[]; {
    int i;

    for (i = 0; line[i] != '\0'; ++i) {
        if (line[i] != cache[i]) {
            return(0);
        }
    } 
    return(1);   
}


void copy_to_cache(line, cache) char line[], cache[]; {
    int i;

    for (i = 0; line[i] != '\n'; ++i) {
        cache[i] = line[i];
    }
    cache[i] = '\n';
    cache[i + 1] = '\0';
}


int copy_to_array(line, last, array) char line[], array[]; int last; {
    int i;

    for (i = 0; line[i] != '\0'; ++i) {
        array[last + i] = line[i];
    }
    array[last + i] = '\0';
    return(last + i);
}

