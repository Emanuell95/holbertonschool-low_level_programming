#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long int number to get the bit from.
 * @index: The index of the bit (starting from 0).
 *
 * Return: The value of the bit at the given index (0 or 1),
 *         or -1 if an error occurred (e.g., index out of range).
 */
int get_bit(unsigned long int n, unsigned int index)
{
    /* Check if index is out of range (there are 64 bits in an unsigned long int) */
    if (index >= sizeof(unsigned long int) * 8)
        return (-1);

    /* Shift the bit at the specified index to the least significant position */
    return ((n >> index) & 1);
}
