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

#endif
