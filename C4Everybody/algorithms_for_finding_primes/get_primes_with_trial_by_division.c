#include <stdio.h>


/*
Output the list of prime numbers between 1 and a provided upper limit
Use the Trial by division method
*/

# define UPPER_LIMIT 1000

int main() {
    int i;
    int primes[UPPER_LIMIT];
    int add_prime();
    int check_prime();
    int count_of_primes;



    count_of_primes = add_prime(primes);

    i = 0;
    printf("Here are the %d primes between 1 and %d \n[", count_of_primes, UPPER_LIMIT);
    for (i=0; i <= count_of_primes - 1; ++i) 
        printf("%d, ", primes[i]);
    printf("]\n");
    
    printf("------------------------------------\n");

    printf("Result of check_prime function with 1 to 1000\n");
    printf("Here are the primes between 1 and 1000\n[ ");
    for (i=0; i <= 1000; ++i) 
        if (check_prime(i))
            printf("%d ", i, check_prime(i));    
    printf("]");
    
}


int add_prime(prime_array) int prime_array[]; {
    int i, j, prime, m, factor;

    prime_array[0] = 2; // add first prime
   
    for (i = 1, m = 1; i <= UPPER_LIMIT; ++i, factor = 0) {
        if (i <= 2)
            continue;
        if ((i % 2) == 0) {
            continue;
        }
        for (j = 0; i >= (prime_array[j] * prime_array[j]); ++j) {
            if ((i % prime_array[j]) == 0) {
                factor = 1;
                break;
            }   
        }
        if (!factor){
            prime_array[m] = i;
            ++m;
        }
    } 
    return m;
}


int check_prime(integer) int integer; {
    int i;

    if (integer < 2)
        return 0;
    if (integer == 2)
        return 1;

    for (i = 2; i * i <= integer; ++i) {
        if (integer % i == 0)
            return 0;
    }
    return 1;
}

// NOTE:
// add_prime can take advantage of further optimisation 
// by only looking testing an integer against already found primes up till the integer's square root
// check_prime in its current implementation has to check every integer 
// up till the test integer's square root