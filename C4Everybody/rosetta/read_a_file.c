# include <stdio.h>


/* 
### Python ###

hand = open('romeo.txt')
for line in hand:
    print(line.strip())
*/


int main() {
    char line[1000];
    FILE *hand;
    hand = fopen("tiny_example_text_file.txt", "r");
    while( fgets(line, 1000, hand) != NULL ) {
        printf("%s", line);
    }
}