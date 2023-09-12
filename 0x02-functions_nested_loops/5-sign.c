#include "main.h"

/**
 * print_sign - Check number passed sign
 * @n: The number to check
 * Description: This function print the sign of number passed
 * Return: return 1 or 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');

	return (0);
}
