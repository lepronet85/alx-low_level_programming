#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - Similar to putchar from stdio
 * @c: The character to be written
 * Description: similar to putchar from stdio
 * Return: None (void)
 */

void _putchar(char c);

/**
 * print_alphabet_x10 - Function to print the lowercase
 * alphabets ten times.
 * Description: This function prints the lowercase
 * from 'a' to 'z', followed by a newline character.
 * Return: None (void)
 */

void print_alphabet_x10(void);

/**
 * print_alphabet - Function to print the lowercase alphabets.
 * Description: This function prints the lowercase
 * from 'a' to 'z', followed by a newline character.
 * Return: None (void)
 */

void print_alphabet(void);

/**
 * _islower - Function to check lowecase
 * @c: The letter
 * Description: This function check if letter passed is lower
 * Return: return 0 or 1
 */

int _islower(int c);

/**
 * _isalpha - Function to check alpha
 * @c: The letter
 * Description: This function check if letter passed is alpha
 * Return: return 0 or 1
 */

int _isalpha(int c);

/**
 * print_sign - Check number passed sign
 * @n: The number to check
 * Description: This function print the sign of number passed
 * Return: return 1 or 0 or -1
 */

int print_sign(int n);

/**
 * _abs - Function to calculate absolute value
 * @n: The number to calculate
 * Description: This function print the absolute of number passed
 * Return: return absolute value
 */

int _abs(int n);

/**
 * print_last_digit - Function to print lastdigit of number
 * @n: The number
 * Description: This function print last digit of number passed
 * Return: return last digit of number
 */

int print_last_digit(int n);

/**
 * jack_bauer - Function that print every minute of jack bauer day
 * Description: This function  function that prints every minute of
 * the day of Jack Bauer, starting from 00:00 to 23:59
 * Return: None (void)
 */

void jack_bauer(void);

/**
 * times_table - Function that prints 9 times table
 * Description: This function prints the 9 times table, starting with 0
 * Return: None (void)
 */

void times_table(void);

/**
 * add - Function that add two integers
 * @a: The first numer
 * @b: The second number
 * Description: This function add a and b passed
 * Return: The sum of a and b
 */

int add(int a, int b);

#endif
