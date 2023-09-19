#include "main.h"

/**
 * _strcpy - Function that copies the string pointed to by src
 * @dest: The destination
 * @src: The source
 * Description: This that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed
 * to by dest
 * Return: Return character
 */

char *_strcpy(char *dest, char *src)
{
	char *original_dest;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}

	*original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (original_dest);
}
