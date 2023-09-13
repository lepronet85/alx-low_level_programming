#include <limits.h>
#include "main.h"

/**
 * print_last_digit - Function to print lastdigit of number
 * @n: The number
 * Description: This function print last digit of number passed
 * Return: return last digit of number
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		last_digit = 8;
	}
	else
	{
		if (n < 0)
			n = -n;

		last_digit = n % 10;
	}

	_putchar('0' + last_digit);
	return (last_digit);
}
