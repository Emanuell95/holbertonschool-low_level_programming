#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: returns 0
 */

int main(void)
{
    long number = 612852475143;
    int inc = 2;

    // Divide out all factors of 2 first
    while (number % 2 == 0)
    {
        number /= 2;
    }

    // Now check for odd factors starting from 3
    for (inc = 3; inc * inc <= number; inc += 2)
    {
        // Divide out each factor as many times as possible
        while (number % inc == 0)
        {
            number /= inc;
        }
    }

    // If number is still greater than 2, it is prime
    if (number > 2)
        printf("%ld\n", number);
    else
        printf("%d\n", inc - 2); // Print the last factor

    return (0);
}
