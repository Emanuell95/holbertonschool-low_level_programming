#include <stdio.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the unsigned long int where the bit will be set.
 * @index: The index of the bit to set, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred (e.g., index out of range).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    /* Check if index is out of range (64 bits in an unsigned long int) */
    if (index >= sizeof(unsigned long int) * 8)
        return (-1);

    /* Use bitwise OR to set the bit at the specified index */
    *n |= (1UL << index);

    return (1);
}
