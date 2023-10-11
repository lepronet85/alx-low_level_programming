#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Function that prints a struct dog
 * @d: The dog struct
 * Return: Nothing (void)
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
