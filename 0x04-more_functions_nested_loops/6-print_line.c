#include "main.h"

/**
 * print_line - Function that draws a straight line in the terminal
 * @n: Draw number
 * Description: This function draws a straight line in the terminal
 * Return: None (void)
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
