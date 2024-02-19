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


void expand(s, t) char s[], t[]; {
    int i, j;
    i = j = 0;

    for (i = 0, j = 0; s[i] != '\0'; ++i) {
        switch (s[i]) {
        case '\n':
            t[j++] = '\\';
            t[j++] = 'n';
            break;
        case '\t':
            t[j++] = '\\';
            t[j++] = 't';
            break;        
        default:
            t[j++] = s[i];
            break;
        }
    }
    t[j] = '\0';

}

    // Equivalent while loop
    //
    // while (s[i] != '\0') {
    //     switch (s[i]) {
    //         case '\n':
    //             t[j++] = '\\';  //      == --- t[j] = '\\'; ++j; ---
    //             t[j++] = 'n';   // same as --- t[j] = 'n';  ++j; ---
    //             break;
    //         case '\t':
    //             t[j] = '\\';
    //             ++j;
    //             t[j] = 't';
    //             ++j;                
    //             break;
    //         default:
    //             t[j] = s[i];
    //             ++j;
    //             break;
    //     }
    //     ++i;
    // }