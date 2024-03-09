/*
C provides for rectangular multi-dimensional arrays, 
although in practice they tend to be much less used than arrays of pointers. 
In this section, we will show some of their properties.

Consider the problem of date conversion, 
from day of the month to day of the year and vice versa. 
For example, March 1 is the 60th day of a non-leap year, 
and the 61st day of a leap year. 

Let us define two functions to do the conversions: 

- `day_of_year` converts the month and day into the day of the year, 
- `month_day` converts the day of the year into the month and day.

Since this latter function returns two values, 
the month and day arguments will be pointers:

month_day(1977, 60, &m, &d) sets m to 3 and d to 1 (March 1st).

These functions both need the same information, 
a table of the number of days in each month ("thirty days hath September ..."). 
Since the number of days per month differs for leap years and non-leap years, 
it's easier to separate them into two rows of a two-dimensional array than 
try to keep track of what happens to February during computation. 
The array and the functions for performing the transformations are as follows:
*/

#include <stdio.h>

static int day_tab[2][13] = {
  {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
  {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};


void main() {
    int day_of_year();
    void month_day();
    int year, month, day, d_o_y;
    int yearday;
    int* pmonth;
    int* pday;
    char choice;

    printf("To get day of year, Press D \n");
    printf("To get month and day, Press M \n");
    printf("Enter choice here: ");
    scanf("%c", &choice);
    
    if (choice == 'D' || choice == 'd') {
        printf("Enter year: \n");
        scanf("%d", &year);
        
        printf("Enter month: \n");
        scanf("%d", &month);
        
        printf("Enter day: \n");
        scanf("%d", &day);

        d_o_y = day_of_year(year, month, day);
        if (d_o_y == 'a')
            printf("Day value exceeds the number of days in selected month.");
        else if (d_o_y == 'b')
            printf("Month input '%d' is outside range 1 - 12.", month);
        else
            printf("Day of year is: %d \n", d_o_y);
    }
    else if (choice == 'M' || choice == 'm') {
        printf("Enter year: \n");
        scanf("%d", &year);
        
        printf("Enter day of year: \n");
        scanf("%d", &yearday);
        
        month_day(year, yearday, &pmonth, &pday);
        printf("%d, %d", *pmonth, *pday);
    }
    else {
        printf("Wrong input. Enter D or M.");
    }

}

int day_of_year(int year, int month, int day) { /*  set day of year */
    int i, leap;

    leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

    // account for edge case where input of month is outside 1 - 12
    if ((month < 1) || (month > 12))
        return('b');    
    // account for edge case where input of day is greater than total number of days in a month
    if (day > day_tab[leap][month])
        return('a');


    for (i = 1; i < month; i++) {
        day += day_tab[leap][i];
    }
    return(day);
}

void month_day(int year, int yearday, int* pmonth, int* pday) { /* set month, day*/
    int i, leap;

    leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
    for (i = 1; yearday > day_tab[leap][i]; i++) {
        yearday -= day_tab[leap][i];
    }
    printf("i %d \n", i);
    printf(" yearday %d \n", yearday);
    *pmonth = i;
    *pday   = yearday;
    printf("got here");
}

// to denote a pointer to an array with three (3) columns
// int (*arr)[3] === int[][3] 
