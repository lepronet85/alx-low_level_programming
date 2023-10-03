#include "main.h"

/**
 * _strncat - Function that concatenates two strings
 * @dest: The destination
 * @src: The source
 * @n: The limit
 * Description: This function concatenates two strings
 * Return: concatened string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (dest_start);
}
