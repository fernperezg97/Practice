#include <ctype.h>
#include <stdio.h>
#include <string.h>

/* 

PROBLEM:

The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143?

NOTES:

- prime # is a # that is only divisible by 1 and itself

steps:

- find a prime factor
- divide num by prime factor

*/

int main(void)
{
    long num = 600851475143;
    int largestPrimeFactor = 0;
    int i = 2;

    while (num / i >= 1)
    {
        if (num % i == 0)
        {
            if (i > largestPrimeFactor)
            {
                largestPrimeFactor = i;
                // printf("** current largest prime factor is %d\n", largestPrimeFactor);
            }
            num = num / i;
            // printf("current number is: %d\n", num);
            i = 1;
        }
        i++;
    }
    printf("%d\n", largestPrimeFactor);
    return 0;
}