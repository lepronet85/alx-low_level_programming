#include "main.h"

/**
 * _strchr - Function that locates a character in a string.
 * @s: The string
 * @c: Occurence of character
 * Description: This function  locates a character in a string
 * Return: A pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}

	return (*s == c) ? s : NULL;
}
