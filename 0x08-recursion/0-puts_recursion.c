#include "main.h"

/**
 * _puts_recursion - Function that prints a string, followed
 * by a new line.
 * @s: The string
 * Description: This function prints a string, followed by a new line.
 * Return: None (void)
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		return;

	_putchar(s[0]);
	_puts_recursion(s + 1);
}
