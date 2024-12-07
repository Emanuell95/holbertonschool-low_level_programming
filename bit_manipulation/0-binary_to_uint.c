#include <stdio.h>
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string of 0 and 1 characters.
 * 
 * Return: The converted unsigned int number, or 0 if
 *         there is an invalid character in the string or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int i;  /* Declare 'i' outside the for loop for C90 compatibility */

    /* Check if the string is NULL */
    if (b == NULL)
        return (0);

    /* Traverse the string and convert binary to unsigned int */
    for (i = 0; b[i] != '\0'; i++)
    {
        /* Check if the character is valid (either '0' or '1') */
        if (b[i] != '0' && b[i] != '1')
            return (0);

        /* Shift result left and add the current digit (0 or 1) */
        result = result * 2 + (b[i] - '0');
    }

    return (result);
}
