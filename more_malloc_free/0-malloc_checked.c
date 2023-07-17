#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - that allocates memory
 * @b: number of bytes to allocate
 * Return: not return
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

