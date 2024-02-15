# include <stdio.h>

/*
Exercise 1-16. 
Write a program to remove trailing blanks and tabs from each line of input, 
and to delete entirely blank lines
*/

#define MAX_LINE_LENGTH 190
#define BUCKET_ARRAY_LENGTH 100


int main() {
    int get_line();
    int trim_trailing_tabs_and_blanks();
    int count_non_blank_chars();
    void save_to_cache();
    int save_to_output_array();
    int len;
    int num_removed_chars;
    int array_last_position = 0;
    char line[MAX_LINE_LENGTH];
    char cache[MAX_LINE_LENGTH];
    char save_array[BUCKET_ARRAY_LENGTH];

    len = 0;
    while ((len = get_line(line, MAX_LINE_LENGTH)) > 0) {
        save_to_cache(line, len, cache);
        if (count_non_blank_chars(cache, len) == 0) {
            // printf("Line is blank\n");
            continue;
        }
        num_removed_chars = trim_trailing_tabs_and_blanks(cache, len);
        //printf("Number of removed characters: %d\n", num_removed_chars);
        // printf("%s\n", cache);
        array_last_position = save_to_output_array(cache, len - num_removed_chars, save_array, array_last_position);
    }
    printf("Output lines between broken lines: \n_ _ _ _ _ _ _ _ _\n%s_ _ _ _ _ _ _ _ _", save_array);
}


// check if line is a blank line
int count_non_blank_chars(line_to_check, line_length)
char line_to_check[];
int line_length;

{
    int i;
    int non_blank_chars = 0;

    for (i = 0; i < (line_length - 1); ++i) {
        if (line_to_check[i] != '\n' && line_to_check[i] != '\t' && line_to_check[i] != ' ') {
            non_blank_chars = 1;
        } 
    }
    return (non_blank_chars);
}


// function to read lines from output
int get_line(input_line, line_length_limit) char input_line[]; int line_length_limit; {

    int i, c;

    for (i = 0; i < line_length_limit && (c = getchar()) != EOF && c != '\n'; ++i) {
        input_line[i] = c;
    }
    if (c == '\n') {
        input_line[i] = c;
        ++i;
    }
    return (i);
}


// cache line 
void save_to_cache(input_line, input_line_length, cache) 
char input_line[]; 
int input_line_length; 
char cache[]; 
{
    int i;

    for (i = 0; i <= (input_line_length - 1); ++i) {
        cache[i] = input_line[i];
    }
    cache[i] = '\0';
}


// remove trailing tabs
int trim_trailing_tabs_and_blanks(line, len) char line[]; int len; {
    // '\0' is line[len] 
    // '\n' is line[len - 1]

    int i;
    int j = 0;
    for (i = (len - 2); i >= 0; --i) {
        if (line[i] == ' ' || line[i] == '\t') {
            line[i + 1] = '\0';
            line[i] = '\n';
            ++j;
        }
        else
            break;
    }
    return j;
}


// save line to storage
int save_to_output_array(line, line_length, array, position_last_saved)
char line[]; 
int line_length; 
char array[]; 
int position_last_saved;
{

    int i;
    
    for (i = 0; i <= (line_length - 1); ++i) {
        array[i + position_last_saved] = line[i];
    }
    array[i + position_last_saved] = '\0';

    return (i + position_last_saved);
}