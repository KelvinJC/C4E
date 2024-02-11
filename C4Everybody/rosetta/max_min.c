# include <stdio.h>

/*
### Python ###

maxval = None
minval = None
while True:
    line = input()
    line = line.strip()
    if line == "done":
        break
    ival = int(line)
    if (maxval is None or ival > maxval):
        maxval = ival
    if (minval is None or ival < minval):
        minval = ival

print('Maximum', maxval)
print('Minimum', minval)
*/



/* 
NOTE: on EOF 
To simulate EOF in a terminal, 
you can use a keyboard shortcut specific to your operating system:

    On Unix-like systems (e.g., Linux, macOS), 
    you can usually trigger EOF by pressing Ctrl + D (hold down the Ctrl key and press D).

    On Windows, 
    you can usually trigger EOF by pressing Ctrl + Z (hold down the Ctrl key and press Z), followed by pressing Enter.

*/

int main() {
    int first = 1;
    int val, maxval, minval;

    while ( scanf("%d", &val) != EOF)  { /* See not above on EOF */
        if ( first || val > maxval ) maxval = val;
        if ( first || val < minval ) minval = val;
        first = 0;
    }

    printf("Maximum %d\n", maxval);
    printf("Minimum %d\n", minval);
}