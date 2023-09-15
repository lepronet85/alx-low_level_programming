#include "main.h"

/**
 * print_number - Function prints an integer
 * @n: integer to print
 * Description: This function prints an integer
 * Return: None (void)
 */

void print_number(int n)
{
	int div = 1;
	int print_flag = 0;

	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
		{
			n += 1;
			print_flag = 1;
		}
		n = -n;
	}

	for (div = 1; div <= n / 10; div *= 10)
	;

	while (div > 0)
	{
		int digit = (n / div) % 10;

		if (digit != 0 || print_flag || div == 1)
		{
			_putchar(digit + '0');
			print_flag = 1;
		}
		div /= 10;
	}
}
