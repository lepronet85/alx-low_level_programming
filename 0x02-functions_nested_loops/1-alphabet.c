#include "main.h"

/**
 * print_alphabet - Function to print the lowercase alphabets.
 * Description: This function prints the lowercase alphabets
 * from 'a' to 'z', followed by a newline character.
 * Return: None (void)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
