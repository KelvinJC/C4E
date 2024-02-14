# include <stdio.h>

# define PRINT_LENGTH 80
# define MAX_LINE_LENGTH 1000
# define STORAGE_ARRAY_LENGTH 15000


void main() {
    int len;
    int get_line();
    int save_line();
    char line[MAX_LINE_LENGTH];
    char store[STORAGE_ARRAY_LENGTH];
    int last_point = 0;
    int storage_full = 0;

    len = 0;
    while ((len = get_line(line, MAX_LINE_LENGTH)) > 0) {
        if (len < PRINT_LENGTH ) {
            continue;
        }
        if ((len + last_point) <= (STORAGE_ARRAY_LENGTH - 1)) {
            last_point = save_line(line, len, store, last_point); 
        }
        else {
            store[last_point] = '\0';
            storage_full = 1;
            break;
        }
    }
    printf("%s", store);
    if (storage_full == 1)
        printf("Current input line larger than remaining storage.\n");
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


int save_line(line, length_of_line, storage_array, position_last_saved) 
char line[];
int length_of_line;
char storage_array[];
int position_last_saved;

{
    int i;

    for (i=0; i <= (length_of_line - 1); ++i)
        storage_array[i + position_last_saved] = line[i];
    storage_array[i + position_last_saved] = '\0';

    return (i + position_last_saved);
}