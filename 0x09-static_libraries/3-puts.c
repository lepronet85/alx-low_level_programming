#include "main.h"

/**
 * _puts - Function that prints a string, followed
 * by a new line
 * @str: The string to print
 * Description: This function prints a string,
 * followed by a new line, to stdout
 * Return: None (void)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
