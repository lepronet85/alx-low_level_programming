#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of
 * a string.
 * @s: The string
 * Description: This function  returns the length of a string
 * Return: The length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return;

	return (1 + _strlen_recursion(s + 1));
}
