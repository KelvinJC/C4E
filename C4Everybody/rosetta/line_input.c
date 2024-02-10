# include <stdio.h>

/*
### Python ###

print('Enter line')
line = input()
print('Line:', line)

*/

int main() {
    char line[1000];
    printf("Enter line\n");
    scanf("%[^\n]1000s", line);
    printf("Line: %s\n", line);
}