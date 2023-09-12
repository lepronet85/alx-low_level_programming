#include "main.h"

/**
 * print_alphabet_x10 - Function to print the lowercase
 * alphabets ten times.
 * Description: This function prints the lowercase alphabets
 * from 'a' to 'z' ten times, followed by a newline character.
 * Return: None (void)
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
