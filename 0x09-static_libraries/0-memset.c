#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: Memory area
 * @b: constant byte
 * @n: Number of byte
 * Description: This function fills memory with a constant byte
 * Return: return a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
