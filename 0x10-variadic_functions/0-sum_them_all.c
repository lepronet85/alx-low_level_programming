#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  Function that returns the sum of all its parameters.
 * @n: The number of args
 * Return: 0 or sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;
	unsigned int i = 0;
	int value;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (; i < n; i++)
	{
		value = va_arg(args, int);
		sum += value;
	}

	va_end(args);

	return (sum);
}
