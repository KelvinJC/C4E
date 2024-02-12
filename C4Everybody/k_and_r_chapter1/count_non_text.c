# include <stdio.h>

/* 
Exercise 1-6. 
Write a program to count blanks, tabs, and newlines. 
*/

int main() {
    int c, num_non_text;
    num_non_text = 0;
    
    printf("Enter input below: \n");
    while ((c=getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            ++num_non_text;
        }
    }
    printf("Number of non text: %d", num_non_text);
}

