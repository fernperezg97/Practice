#include <ctype.h>
#include <stdio.h>
#include <string.h>

/*

PROBLEM:

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 x 99.
Find the largest palindrome made from the product of two 3-digit numbers.

NOTES:

steps:

- two variables to keep track of num1 and num2
- variable to keep track of product
- while loop since we don't know the ending result
- way to figure out if num is a palindrome [::-1] in Python allows you to read the items 'backwards' to check

while num * num != reverseNum(num x num) XXXXX --> NOPE! Doesn't work on 2nd thought bc could have num that isn't LARGEST be a palindrome.


*/

int reverseNum(int num)
{
    int n, reverse = 0, remainder;
    while (n!= 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    return reverse;
}

int numDigits(int n)
{
    int n, count = 0;
    
    // iterate at least once, then until n becomes 0
    // remove last digit from n in each iteration
    // increase count by 1 each iteration

    do {
        n /= 10;
        ++count;
    } while (n != 0);

    return count;
}

int main()
{
    int num1 = 100, num2 = 100, product = num1 * num2;
    while (product != reverseNum(product))
    {

    }
}