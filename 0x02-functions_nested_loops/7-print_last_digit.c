#include "main.h"

/**
 * print_last_digit - Function to print lastdigit of number
 * @n: The number
 * Description: This function print last digit of number passed
 * Return: return last digit of number
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		n = -n;
	}

	if (n >= 0 && n <= 9)
	{
		return (last_digit * 11);
	}

	return (last_digit);
}
