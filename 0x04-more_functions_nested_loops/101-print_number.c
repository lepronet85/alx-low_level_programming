#include "main.h"

/**
 * print_number - Function prints an integer
 * @n: integer to print
 * Description: This function prints an integer
 * Return: None (void)
 */

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
