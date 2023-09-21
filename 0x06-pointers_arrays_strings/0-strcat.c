#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: The destination
 * @src: The source
 * Description: This function concatenates two strings
 * Return: Concatened strings
 */

char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
}
