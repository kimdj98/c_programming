#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int primes[300] = {2,3};
    int idx = 2;
    bool isPrime;

    for (int p = 5; p <= 300; p += 2) {
        for (int i = 0 ; i < idx ; i++) {
            if (p % primes[i] == 0) { // check if it is a prime number
                break;
            } else if (i == (idx-1)) { // check if it has reached the end
                primes[idx] = p;
                idx++;
                continue;
            } else {
                continue;
            }
        }
    }

    for (int i = 0; i < idx; i++) {
        printf("%d  ", primes[i]);
    }


    return 0;
}
