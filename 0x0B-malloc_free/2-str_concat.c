#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - Concatenates two strings into a new string.
 * @s1: First string
 * @s2: Second string
 * Description: This function concatenates two strings into a new
 * Return: A pointer to the concatenated string, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated_str;
	int i, concatenated_index = 0, total_length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		total_length++;

	concatenated_str = malloc(sizeof(char) * (total_length));

	if (concatenated_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concatenated_str[concatenated_index++] = s1[i];

	for (i = 0; s2[i]; i++)
		concatenated_str[concatenated_index++] = s2[i];

	return (concatenated_str);
}
