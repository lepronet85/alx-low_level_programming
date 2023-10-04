#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters and initializes it
 * with a specific character.
 * @size: Size of the array
 * @c: Character to insert
 * Description: This function Creates an array of characters and
 * initializes it with a specific character
 * Return: NULL if size is zero or if it fails, a pointer to the
 * array otherwise.
 */

char *create_array(unsigned int size, char c)
{
	char *charArray;
	unsigned int i;

	if (size == 0)
		return (NULL);

	charArray = malloc(sizeof(char) * size);

	if (charArray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		charArray[i] = c;

	return (charArray);
}
