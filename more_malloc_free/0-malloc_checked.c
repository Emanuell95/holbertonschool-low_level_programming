#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocate
 * 
 * Return: Pointer to the allocated memory
 *         If malloc fails, exits with status value of 98
 */
void *malloc_checked(unsigned int b)
{
    void *ptr;

    ptr = malloc(b);  // Attempt to allocate memory
    if (ptr == NULL)  // Check if malloc failed
    {
        exit(98);     // Exit with status 98 if allocation fails
    }

    return (ptr);     // Return pointer to allocated memory
}
