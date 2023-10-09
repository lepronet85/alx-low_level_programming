#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n: The length
 * Return: null or s1, s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	n = len2;

	result = (char *)malloc(len1 + n + 1);

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strncat(result, s2, n);
	result[len1 + n] = '\0';

	return (result);
}
