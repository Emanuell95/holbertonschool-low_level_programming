#include "main.h"

/**
 * malloc_checked - allocate memory using malloc.
 * 
 * 
 * Return a  pointer to the allocated  memory space
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
