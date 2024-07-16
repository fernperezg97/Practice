#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*

PROBLEM:

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible with no remainderby all of the numbers from 1 to 20?

NOTES:

- variable to track current largest num
- num % 1-20 has to = 0
- if smallest num that can be divided by 1-10 = 2520 does that mean that should be starting point?
- while loop since we don't have end point

*/

bool isDivisibleBy(int num)
{
    for (int i = 1; i <= 20; i++) {
        if (num % i != 0) {
            return false;
        }
    }
    return true;
}

int main(void)
{
    int n = 2520;
    while (true) {
        if (isDivisibleBy(n)) {
            printf("The smallest number divisible by all numbers from 1 to 20 is %d\n", n);
            break;
        }
        n++;
    }
    return 0;
}