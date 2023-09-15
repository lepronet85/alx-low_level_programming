#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal
 * @n: Draw number
 * Description: This function draws a diagonal line on the terminal
 * Return: None (void)
 */

void print_diagonal(int n)
{
	int spaces = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			int i;

			for (i = 0; i < spaces; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');

			spaces++;
			n--;
		}
	}
}
