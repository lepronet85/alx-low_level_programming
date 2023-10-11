#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: The dog structure
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 * Return: None (void)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
