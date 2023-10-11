#include <stdio.h>
#include "dog.h"

/**
 * new_dog - Function that creates a new dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}
