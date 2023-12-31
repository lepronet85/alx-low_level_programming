#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * _putchar - Similar to putchar from stdio
 * @c: The character to be written
 * Description: similar to putchar from stdio
 * Return: None (void)
 */

void _putchar(char c);

/**
 * _isupper - Function that check if upper
 * @c: The letter to check
 * Description: This function checks if letter passed is
 * uppercase character
 * Return: Reurn 1 or 0
 */

int _isupper(int c);

/**
 * _isdigit - Function that check if digit
 * @c: The value to check
 * Description: This function that checks for a digit (0 through 9)
 * Return: return 0 or 1
 */

int _isdigit(int c);

/**
 * mul - Function that multiplies two integers
 * @a: The first number
 * @b: The second number
 * Description: This function multiplies two integers and return value
 * Return: return the multiply value
 */

int mul(int a, int b);

/**
 * print_numbers - Function that prints the numbers, from 0 to 9
 * Desription: This function  prints the numbers, from 0 to 9,
 * followed by a new line
 * Return: None (void)
 */

void print_numbers(void);

/**
 * print_most_numbers - Function that prints numbers, from 0 to 9
 * Description: This function prints numbers from 0 to 9 without
 * 2 and 4
 * Return: None (void)
 */

void print_most_numbers(void);

/**
 * more_numbers - Function that prints 10 times number
 * Description: This function prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 * Return: None (void)
 */

void more_numbers(void);

/**
 * print_line - Function that draws a straight line in the terminal
 * @n: Draw number
 * Description: This function draws a straight line in the terminal
 * Return: None (void)
 */

void print_line(int n);

/**
 * print_diagonal - Function that draws a diagonal line on the terminal
 * @n: Draw number
 * Description: This function draws a diagonal line on the terminal
 * Return: None (void)
 */

void print_diagonal(int n);

/**
 * print_square - Function that prints a square
 * @size: The square size
 * Description: This function prints a square, followed by a
 * new line.
 * Return: None (void)
 */

void print_square(int size);

/**
 * print_triangle - Function that prints a triangle
 * @size: Triangle size
 * Description: This function prints a triangle, followed by a
 * new line
 * Return: None (void)
 */

void print_triangle(int size);

/**
 * print_number - Function prints an integer
 * @n: integer to print
 * Description: This function prints an integer
 * Return: None (void)
 */

void print_number(int n);

#endif
