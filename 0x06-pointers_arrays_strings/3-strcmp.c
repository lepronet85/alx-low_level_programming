#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Description: This function compares two strings lexicographically.
 *
 * Return: 0 if the strings are equal, a negative value if s1 is less than s2,
 *         or a positive value if s1 is greater than s2.
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
