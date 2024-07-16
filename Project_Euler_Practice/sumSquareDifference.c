#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

/*

PROBLEM:

The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385.
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025.
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

NOTES:

- func 1 to find sum of square from 1 - 100 (sq every number and add them)
- func 2 to find sq of the sum from 1 - 100 (add nums from 1 - 100 and THEN square the answer)

*/

int main(void)
{
    int numSquared = 0, sumSquaredNums = 0, addedNums = 0, squareOfSum = 0;
    for (int i = 1; i <= 100; i++)
    {
        numSquared = i * i;
        sumSquaredNums += numSquared;
        addedNums += i;
    }
    printf("Sum of squared nums: %d\nSquare of summed nums: %d\n", sumSquaredNums, addedNums * addedNums);
}