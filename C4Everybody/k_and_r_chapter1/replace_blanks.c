# include <stdio.h>

/*
Exercise 1-7. 
Write a program to copy its input to its output, 
replacing each string of one or more blanks by a single blank.
*/


int main() {
    int c;
    
    int num_blank = 0;  

    while( (c = getchar()) != EOF) {
        if (c == ' ') {
            num_blank = num_blank + 1;
            if (num_blank == 1)
                putchar(c);
        }      
        else {
            putchar(c);  
            num_blank = 0;      
        }
    }
}