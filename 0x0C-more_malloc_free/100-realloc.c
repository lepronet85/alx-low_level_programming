#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Function that reallocates a memory block using
 * malloc and free
 * @ptr: The pointer to addr
 * @old_size: The old size
 * @new_size: The new size
 * Return: None (void)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	} else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	} else
	{
		new_ptr = malloc(new_size);
		if (new_ptr != NULL)
		{
			for (i = 0; i < (old_size < new_size ? old_size : new_size); i++)
			{
				*((char *)new_ptr + i) = *((char *)ptr + i);
			}
			free(ptr);
			return (new_ptr);
		}
		return (NULL);
	}
}
