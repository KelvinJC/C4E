#include <stdio.h>
#include <math.h>

/*
Output the list of prime numbers between 1 and a provided upper limit
Use the Trial by division method
*/


# define ARRAY 2000


int main() {
    int i;
    int array[ARRAY];
    void add_prime();
    int prime_array[ARRAY];

    // instantiate the array of primes with 0
    for (i = 0; i <= ARRAY - 1; ++i) {
        prime_array[i] = 0;
    }

    // insantiate the boolean array with 1
    for (i = 0; i <= ARRAY - 1; ++i) {
        array[i] = 1;
    }

    printf("Here are the primes: \n");
    add_prime(array, prime_array);

    // print prime numbers
    for (i = 0; i <= ARRAY - 1 && prime_array[i] != 0; ++i) {
        printf("%d ", prime_array[i]);
    }
}


void add_prime(bool_array, prime_array) int bool_array[], prime_array[]; {
    int i, integer, index_last_prime, product, num_factor = 0;
    
    for (integer = 0, index_last_prime = 0; integer <= ARRAY; ++integer, num_factor = 0) { // loop through boolean array

        if (integer <= 1) {  // array index at 0, 1
            bool_array[integer] == 0;
            continue;
        }

        if (integer <= 3) {  // array index at 2, 3
            bool_array[integer] == 1;
            prime_array[index_last_prime++] = integer; // add integer to array of primes then increment index of prime array
            // multiples of current integer which is a prime are non-prime
            // convert the corresponding boolean element to 0 
            for (i = 2, product = 0; product <= ARRAY; ++i) {
                product = integer * i;
                if (product <= ARRAY)
                    bool_array[product] = 0;
            }
            continue;
        }

        // restart loop when array element == 0
        if (bool_array[integer] == 0)
            continue;

        //for (i = 5; i <= sqrt(ARRAY); i = i + 2) {  optimisation to find greater number of primes; max ARRAY length reached so far == 250,000      

        // try dividing integer by all found primes less than its square root
        for (i = 0; (prime_array[i] <= sqrt(integer)) && integer <= sqrt(ARRAY); ++i) { 
            if (integer % prime_array[i] == 0) {
                num_factor = 1;
                break;
            }
        }

        if (num_factor == 0) {
            bool_array[integer] = 1;
            prime_array[index_last_prime++] = integer;
            for (i = 2, product = 0; product <= ARRAY; ++i) {
                product = integer * i;
                if (product <= ARRAY)
                    bool_array[product] = 0;
            } 
            continue;          
        } 
        //}  
    }
}
