#include <stdio.h>

/*
Exercise 3-1. 
Write a function expand(s, t) which converts characters like newline and tab
into visible escape sequences like \n and \t as it copies the string s to t. 
Use a switch.
*/

#define MAX_LINE_LENGTH 200


int main() {
  char expanded[1000];
  void expand();

  expand("Hello world", expanded);
  printf("1. test 1: %s\n", expanded);
  expand("Hello world\n", expanded);
  printf("2. test 2: %s\n", expanded);
  expand("Hello\tworld\n", expanded);
  printf("3. test 3: %s\n", expanded);
  expand("Hello\tworld\nHave a nice\tday\n", expanded);
  printf("4. test 4: %s\n", expanded);
}


void expand(input, expanded_line) char input[], expanded_line[]; {
    int i, j;
    i = j = 0;

    for (i = 0, j = 0; input[i] != '\0'; ++i) {
        switch (input[i]) {
        case '\n':
            expanded_line[j++] = '\\';
            expanded_line[j++] = 'n';
            break;
        case '\t':
            expanded_line[j++] = '\\';
            expanded_line[j++] = 't';
            break;        
        default:
            expanded_line[j++] = input[i];
            break;
        }
    }
    expanded_line[j] = '\0';
}

    // Equivalent while loop
    //
    // while (input[i] != '\0') {
    //     switch (input[i]) {
    //         case '\n':
    //             expanded_line[j++] = '\\';  //      == --- expanded_line[j] = '\\'; ++j; ---
    //             expanded_line[j++] = 'n';   // same as --- expanded_line[j] = 'n';  ++j; ---
    //             break;
    //         case '\t':
    //             expanded_line[j] = '\\';
    //             ++j;
    //             expanded_line[j] = 't';
    //             ++j;                
    //             break;
    //         default:
    //             expanded_line[j] = input[i];
    //             ++j;
    //             break;
    //     }
    //     ++i;
    // }