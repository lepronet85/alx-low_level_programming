#include "main.h"
#include <stddef.h>

/**
 * _strstr - Function that locates a substring.
 * @haystack: The string
 * @needle: The substring
 * Description: This function locates a substring.
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			char *h = haystack;
			char *n = needle;

			while (*n != '\0' && *h != '\0' && *h == *n)
			{
				h++;
				n++;
			}

			if (*n == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
