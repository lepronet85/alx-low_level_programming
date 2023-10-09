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
	int i;
	char error_message[] = "Memory allocation failed.\n";

	if (ptr == NULL)
	{
		for (i = 0; error_message[i] != '\0'; i++)
			_putchar(error_message[i]);
		_exit(98);
	}

	return (ptr);
}
