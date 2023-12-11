#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: The string
 * @accept: Acceted value
 * Description: This function gets the length of a prefix substring
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] != '\0' && strchr(accept, s[i]) != NULL)
	{
		i++;
	}

	return (i);
}
