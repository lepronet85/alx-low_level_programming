#include "main.h";

/**
 * times_table - Function that prints 9 times table
 * Description: This function prints the 9 times table, starting with 0
 * Return: None (void)
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar('0' + i * j);
			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
	}
}
