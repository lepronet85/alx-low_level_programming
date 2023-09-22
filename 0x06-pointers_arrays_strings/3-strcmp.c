#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: The first string
 * @s2: The second string
 * Description: This function compares two strings
 * Return: The compared result
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
			return (-15);
		else if (*s1 > *s2)
			return (15);

		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 != '\0')
		return (-15);
	else if (*s1 != '\0' && *s2 == '\0')
		return (15);

	return (0);
}
