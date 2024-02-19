# include <stdio.h>

int main() { /* count digits, white space, others */
    int c, i, num_white, num_other, num_digit[10];

    num_white = num_other = 0;
    for (i = 0; i < 10; i++)
        num_digit[i] = 0;

    while ((c = getchar()) != EOF)
        switch (c) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8': 
        case '9':
            num_digit[c - '0']++;       
            break;
        case ' ':
        case '\n':
        case '\t':
            num_white++;
            break;
        default:
            num_other++;
            break;
        }
}