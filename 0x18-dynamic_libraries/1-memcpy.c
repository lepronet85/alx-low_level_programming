#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: The destination
 * @src: The source
 * @n: Number of byte
 * Description: This function copies memory area
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
