#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: The string
 * Return: the converted number, or 0 i
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
			result = (result << 1);
		else if (b[i] == '1')
			result = (result << 1) | 1;
		else
			return (0);
		i++;
	}

	return (result);
}
