#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers, followed by a new line.
 * @separator: The separator
 * @n: Number of args
 * Return: Nothing (void)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int = 0;
	int number;

	va_start(args, n);

	for (; i < n; i++)
	{
		if (number < 0)
		{
			_putchar('-');
			number = -number;
		}

		if (number == 0)
			_putchar('0');
		else
			print_positive_number(number);

		if (i < n - 1 && separator != NULL)
		{
			while (*separator)
			{
				_putchar(*separator++);
			}
		}
	}

	va_end(args);

	_putchar('\n');
}
