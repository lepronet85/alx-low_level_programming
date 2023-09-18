#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: The string
 * Description: This function returns the length of a string
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
}
