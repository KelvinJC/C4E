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
    void copy();
    int copy_to_array();
    int current_len;
    int num_removed_chars;
    char line[MAX_LINE_LENGTH];
    char duplicate[MAX_LINE_LENGTH];
    char save_array[BUCKET_ARRAY_LENGTH];
    int current_num_chars = 0;

    current_len = 0;
    while ((current_len = get_line(line, MAX_LINE_LENGTH)) > 0) {
        copy(line, current_len, duplicate);
        if (count_non_blank_chars(duplicate, current_len) == 0) {
            // printf("Line is blank\n");
            continue;
        }
        num_removed_chars = trim_trailing_tabs_and_blanks(duplicate, current_len);
        //printf("Number of removed characters: %d\n", num_removed_chars);
        // printf("%s\n", duplicate);
        current_num_chars = copy_to_array(duplicate, current_len - num_removed_chars, save_array, current_num_chars);
    }
    printf("Output lines between broken lines: \n_ _ _ _ _ _ _ _ _\n%s_ _ _ _ _ _ _ _ _", save_array);
}


// check if line is a blank line
int count_non_blank_chars(line, len)
char line[];
int len;

{
    int i;
    int non_blank_chars = 0;

    for (i = 0; i < (len - 1); ++i) {
        if (line[i] != '\n' && line[i] != '\t' && line[i] != ' ') {
            non_blank_chars = 1;
        } 
    }
    return (non_blank_chars);
}


// function to read lines from input
int get_line(line, limit) char line[]; int limit; {

    int i, c;

    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    return (i);
}


// copy line 
void copy(input_line, len, copy) 
char input_line[]; 
int len; 
char copy[]; 
{
    int i;

    for (i = 0; i <= (len - 1); ++i) {
        copy[i] = input_line[i];
    }
    copy[i] = '\0';
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
int copy_to_array(line, len, array, current_num_char)
char line[]; 
int len; 
char array[]; 
int current_num_char;
{

    int i;
    
    for (i = 0; i <= (len - 1); ++i) {
        array[i + current_num_char] = line[i];
    }
    array[i + current_num_char] = '\0';

    return (i + current_num_char);
}