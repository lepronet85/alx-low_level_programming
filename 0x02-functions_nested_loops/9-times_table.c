#include "main.h"

/**
 * times_table - Function that prints 9 times table
 * Description: This function prints the 9 times table, starting with 0
 * Return: None (void)
 */

void times_table(void)
{
	int i, j, result;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			result = i * j;
			if (j == 0)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
					_putchar(' ');

				_putchar('0' + result);
			}

		}

		_putchar('\n');
	}
}
