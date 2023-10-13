#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char
 * @arg: The arg
 * Return: Nothing
 */

void print_char(va_list arg)
{
	char character;
	character = va_arg(arg, int);
	printf("%c", character);
}

/**
 * print_integer
 * @arg: The arg
 * Return: Nothing
 */

void print_integer(va_list arg)
{
	int number;
	number = va_arg(arg, int);
	printf("%d", number);
}

/**
 * print_float_number
 * @arg: The arg
 * Return: Nothing
 */

void print_float_number(va_list arg)
{
	float number;
	number = va_arg(arg, double);
	printf("%f", number);
}

/**
 * print_string_value
 * @arg: The arg
 * Return: Nothing
 */

void print_string_value(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Function that prints all
 * @format: The format
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int i, j;

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float_number},
		{"s", print_string_value}
	};

	va_start(args, format);

	if (!format)
	{
		printf("\n");
		va_end(args);
		return;
	}

	i = 0;
	while (format[i])
	{
		j = 0;
		while (j < 4 && format[i] != funcs[j].symbol[0])
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

