#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: Memory to allocate size
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
