#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Function that searches a string for any
 * of a set of bytes.
 * @s: The string
 * @accept: Accepted value
 * Description: This function searches a string for any of
 * a set of bytes
 * Return: A pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
				return (s);
		}

		s++;
	}

	return (NULL);
}
