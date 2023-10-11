#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Function that return the length of sting
 * @str: The string
 * Return: String length
 */

int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * _strcopy - Copy the string
 * @src: The source string
 * Return: Copied string
 */

char *_strcopy(const char *src)
{
	int len = _strlen(src);
	char *dest = (char *)malloc(len + 1);
	int i = 0;

	if (dest != NULL)
	{
		for (i = 0; i <= len; i++)
			dest[i] = src[i];
	}
	return (dest);
}

/**
 * new_dog - Function that creates a new dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo = (dog_t *)malloc(sizeof(dog_t));

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	if (doggo == NULL)
		return (NULL);

	doggo->name = _strcopy(name);
	doggo->age = age;
	doggo->owner = _strcopy(owner);

	if (doggo->name == NULL || doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo->owner);
		free(doggo);
		return (NULL);
	}

	return (doggo);
}
