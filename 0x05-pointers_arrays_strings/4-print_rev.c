#include "main.h"

/**
 * print_rev - Function that prints a string, in reverse
 * @s: The string
 * Description: This function prints a string, in reverse,
 * followed by a new line
 * Return: None (void)
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
