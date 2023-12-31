#include "main.h"

/**
 * _print_rev_recursion - Function that prints a string in reverse, followed
 * by a new line.
 * @s: The string
 * Description: This function prints a string in reverse, followed by a new
 * line.
 * Return: None (void)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
