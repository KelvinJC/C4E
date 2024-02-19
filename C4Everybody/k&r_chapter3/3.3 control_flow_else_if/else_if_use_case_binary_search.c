# include <stdio.h>

/*
To illustrate a three-way decision, 
here is a binary search function that decides if a particular value x occurs in the sorted array v. 
The elements of v must be in increasing order. 
The function returns the position (a number between 0 and n-1) if x occurs in v, and -1 if not.
*/

int binary_search(element, sorted_array, len) /* search for element in sorted_array[0] ... sorted_array[n-1] */
int element, sorted_array[], len;
{
    int low, high, mid;

    low = 0;
    high = len - 1;
    
    while (low <= high) {
        mid = (low + high) / 2;
        if (element < sorted_array[mid])
            high = mid - 1;
        else if (element > sorted_array[mid])
            low = mid + 1;
        else /* found match i.e. element == mid */
            return (mid);
    }
    return(-1);
}