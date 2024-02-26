/*

C solution w/ BIT, beats 100% ... ?

jarodlaw
May 14, 2023

keywords: C,  Binary Indexed Tree

    Intuition
This is a classical problem that can be solved with different approaches. 
The naive approach is to check each element with all elements to its right, 
but this approach has a time complexity of O(n2) which is not efficient especially for larger inputs.

    Approach
A more efficient approach is to use a Binary Indexed Tree (BIT), also known as a Fenwick tree, 
which is a data structure that can efficiently update elements and calculate prefix sums in a table of numbers. 
It allows us to perform these tasks in O(logn) time, 
which improves the efficiency of the solution.

This is a C implementation of the problem using the BIT. 
This solution has a time complexity of O(nlogn) 
which is more efficient than the naive approach.

This code first creates a binary indexed tree. 
Then, for each number from right to left, it calculates the sum of all previous numbers 
which are less than the current number using the getSum() function, 
and then increments the count of the current number in the BIT using the update() function. 
The result is stored in the counts array which is then returned. 
The OFFSET is used to handle negative numbers.


Complexity:
Time complexity:  O(nlogn)
Space complexity: O(n)

*/



#include <stdlib.h>

#define MAX_NUM 20001
#define OFFSET 10000

typedef struct BIT {
    int size;
    int tree[MAX_NUM + 1];
} BIT;

BIT *createBIT() {
    BIT *bit = (BIT *)malloc(sizeof(BIT));
    bit->size = MAX_NUM;
    for (int i = 0; i <= MAX_NUM; i++)
        bit->tree[i] = 0;
    return bit;
}

void update(BIT *bit, int i) {
    for (; i <= bit->size; i += (i & -i))
        bit->tree[i]++;
}

int getSum(BIT *bit, int i) {
    int sum = 0;
    for (; i > 0; i -= (i & -i))
        sum += bit->tree[i];
    return sum;
}

int* countSmaller(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int *counts = (int *)malloc(numsSize * sizeof(int));
    BIT *bit = createBIT();
    for (int i = numsSize - 1; i >= 0; i--) {
        counts[i] = getSum(bit, nums[i] + OFFSET);
        update(bit, nums[i] + OFFSET + 1);
    }
    free(bit);
    return counts;
}