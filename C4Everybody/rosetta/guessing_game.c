# include <stdio.h>

/*
### Python ###

while True:
    try:
        line = input()
    except: # If we get an EOF
        break
    line = line.strip()
    guess = int(line)
    if guess == 42:
        print('Nice work!')
        break
    elif guess < 42:
        print('Too low - guess again')
    else:
        print('Too high - guess again')

*/



int main() {
    int guess;
    printf("Try to guess a number: \n");
    while ( scanf("%d", &guess) != EOF ) {
        if ( guess == 42 ) {
            printf("You got it. Nice work!\n");
            break;
        } 
        else if ( guess < 42 ) 
            printf("Too low - guess again\n");
        else
            printf("Too high - guess again\n");
    }
}