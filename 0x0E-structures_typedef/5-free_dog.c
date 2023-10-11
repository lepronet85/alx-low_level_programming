#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function thatfrees dogs
 * @d: The dog struct
 * Return: None (void)
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);

		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
