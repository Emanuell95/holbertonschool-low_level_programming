#include <stdlib.h>
#include "main.h"
/**
 *_calloc - Allocates memory for an array and initializes it to zero
 *@nmemb: Number of elements in the array
 *@size: Size of each element in bytes
 *
 *Return: Pointer to the allocated memory. If nmemb or size is 0, or if
 *         malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int total_size;
    void *ptr;
    char *initializer;
    unsigned int i;

    
    if (nmemb == 0 || size == 0)
        return (NULL);

   
    total_size = nmemb * size;

    
    ptr = malloc(total_size);
    if (ptr == NULL)
        return (NULL);

    
    initializer = ptr;  // Use a char pointer to set each byte to zero
    for (i = 0; i < total_size; i++)
        initializer[i] = 0;

    return (ptr);
}
