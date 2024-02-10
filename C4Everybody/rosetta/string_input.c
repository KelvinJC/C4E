# include <stdio.h>

/*
### Python ###

print('Enter name')
name = input()
print('Hello', name)
*/

int main() {
    char name[100];
    printf("Enter name\n"); 
    scanf("%100s", name);
    printf("Hello %s\n", name);

}