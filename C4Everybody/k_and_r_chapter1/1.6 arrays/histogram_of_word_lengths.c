# include <stdio.h>

/*
Exercise 1-12. 
Write a program to print a histogram of the lengths of words in its input.
It is easiest to draw the histogram horizontally;
a vertical orientation is more challenging.
*/


int main() {
    int i, j, c, num_letters = 0;
    int word_length[100]; // declare an array of 100 integers, empty at this point

    // assign 0 as an element at all indices in the empty array
    for (i = 0; i < 100; ++i)
        word_length[i] = 0;

    // parse input 
    while ((c = getchar()) != EOF)
        if (c == '\n' || c == '\t' || c == '\b' || c == ' ') { // define the delimiters of a word
            if (num_letters > 0)
                ++word_length[num_letters];
            num_letters = 0;
        }
        else {
            ++num_letters;
        }

    // print histogram    
    for (i = 0; i < 100; ++i) {
        if (word_length[i] > 0) {
            printf("word_length %3.0d ", i);
            for (j = 0; j < word_length[i]; ++j)
                putchar('|');
            putchar('\n');
        }
    }
}