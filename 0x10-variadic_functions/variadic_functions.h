#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

int _putchar(char c);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
 * struct printer - The printer struct
 * @symbol: The symbol
 * @print: The print
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list args);
} printer_t;

#endif
