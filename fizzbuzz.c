// Author: Nick Salerni
// FizzBuzz - written in C.

/* The following program prints the integers from 1 to 100.
 For multiples of three print "Fizz" instead of the number and for the multiples of five print "Buzz".
 For numbers which are multiples of both three and five print "FizzBuzz".
 */

#include <stdio.h>

int main()
{
    int i;
    
    for (i = 1; i <= 100; i++)
    {
        // If the value (i) is divisable by 3 and 5.
        if (i % 15 == 0)
        {
            printf("FizzBuzz\n");
        }
        // If the value (i) is divisable by 3.
        else if (i % 3 == 0)
        {
            printf("Fizz\n");
        }
        // If the value (i) is divisable by 5.
        else if (i % 5 == 0)
        {
            printf("Buzz\n");
        }
        // If the value (i) is NOT divisable by 3 or 5.
        else
        {
            printf("%d\n", i);
        }
    } 
}