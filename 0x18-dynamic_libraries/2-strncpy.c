#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: The destination
 * @src: The source
 * @n: The limit
 * Description: This function copies a string
 * Return: The copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (dest_start);
}
