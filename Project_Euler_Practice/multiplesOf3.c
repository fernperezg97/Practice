#include <ctype.h>
#include <stdio.h>
#include <string.h>

/* PROBLEM:

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 

The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

*/

int main(void)
{
    int maxNum = 1000;
    int total = 0;

    for (int i = 1; i < maxNum; i++) 
    {
        if ((i % 5 == 0 || i % 3 == 0) || (i % 3 == 0 && i % 5 == 0)) 
        {
            total += i;
        }
    }

    printf("%d\n", total);

    return 0;
}

/* END NOTES: kept getting wrong answer because problem said #'s < 1000 and I was doing <= 1000 SMH! */