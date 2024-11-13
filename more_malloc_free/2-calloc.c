#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory. If nmemb or size is 0, or if
 *         malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int total_size;
    void *ptr;
    unsigned int i;
    char *initializer;

    /* Check for zero nmemb or size */
    if (nmemb == 0 || size == 0)
        return (NULL);

    /* Calculate total memory size */
    total_size = nmemb * size;

    /* Allocate memory */
    ptr = malloc(total_size);
    if (ptr == NULL)
        return (NULL);

    /* Initialize allocated memory to zero */
    initializer = (char *)ptr;
    for (i = 0; i < total_size; i++)
        initializer[i] = 0;

    return (ptr);
}
