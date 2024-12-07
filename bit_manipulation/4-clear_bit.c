#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the unsigned long int to modify.
 * @index: The index of the bit to clear, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred (e.g., index out of range).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    /* Check if index is out of range (64 bits in an unsigned long int) */
    if (index >= sizeof(unsigned long int) * 8)
        return (-1);

    /* Use bitwise AND with NOT to clear the bit at the specified index */
    *n &= ~(1UL << index);

    return (1);
}
