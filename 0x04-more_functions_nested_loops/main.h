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

#endif
