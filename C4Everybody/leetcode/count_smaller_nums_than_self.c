/*

315. Count of Smaller Numbers After Self
Hard

Given an integer array nums, 
return an integer array counts where counts[i] is the number of 
smaller elements to the right of nums[i].

 

Example 1:

Input: nums = [5,2,6,1]
Output: [2,1,1,0]

Explanation:
To the right of 5 there are 2 smaller elements (2 and 1).
To the right of 2 there is only 1 smaller element (1).
To the right of 6 there is 1 smaller element (1).
To the right of 1 there is 0 smaller element.
Example 2:

Input: nums = [-1]
Output: [0]
Example 3:

Input: nums = [-1,-1]
Output: [0,0]
 

Constraints:

1 <= nums.length <= 10^5
-10^4 <= nums[i] <= 10^4

*/


/*
my answer is in line with what I have learned so far in C
*/

#include <stdio.h>

#define ARRAY 100000

void main() {
    char nums[] = {-1, -1}; //{5, 2, 6 , 1, 7, 4, 45, 4, 3, 2, 99, 45, 34}; // {5, 2, 6 , 1};
    char counts[2];
    void count_smaller();

    int i, len;
    len = sizeof(nums) / sizeof(nums[0]);


    printf("len %d\n", len);
    
    count_smaller(nums, len, counts);
    
    printf("nums here:   ");

    for (i=0; i < len; ++i) {
        printf(" %2d ", nums[i]);
    }

    putchar('\n');
    
    printf("counts here: ");

    for (i=0; i < len; ++i) {
        printf(" %2d ", counts[i]);
    }
}

void count_smaller(nums, len, counts) char nums[], counts[]; int len; {

    int i, j, num, count_of_less_nums;

    for (i=0; i < len; ++i) {
        num = nums[i];
        for (j = i, count_of_less_nums = 0; j < len; ++j) {
            if (num > nums[j]) {
                ++count_of_less_nums;
            }
        }
        counts[i] = count_of_less_nums;
    }
}

