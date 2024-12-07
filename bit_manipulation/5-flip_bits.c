#include <stdio.h>

/**
 * flip_bits - Counts the number of bits to flip to convert one number to another.
 * @n: The first unsigned long int number.
 * @m: The second unsigned long int number.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int xor_result;
    unsigned int count;

    count = 0;

    /* Perform XOR operation to find differing bits */
    xor_result = n ^ m;

    /* Count the set bits (1s) in the XOR result */
    while (xor_result > 0)
    {
        if (xor_result & 1)
            count++;
        xor_result >>= 1; /* Shift right to process the next bit */
    }

    return (count);
}
