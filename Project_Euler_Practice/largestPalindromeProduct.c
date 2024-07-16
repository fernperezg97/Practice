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
- go from large to small nums ex. 999 x 998 vs 100 X 101

*/

int reverseNum(int num)
{
    int reverse = 0, remainder;
    while (num!= 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    return reverse;
}

int main()
{
    int product, currentLargestProduct = 0;

    for (int num1 = 999; num1 >= 100; num1--)
    {
        for (int num2 = 999; num2 >= 100; num2--)
        {
            product = num1 * num2;
            if (product == reverseNum(product) && product > currentLargestProduct)
            {
                currentLargestProduct = product; 
            }
        }  
    }
    printf("%d\n", currentLargestProduct);     
}