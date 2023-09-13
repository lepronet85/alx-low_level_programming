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
			if (j == 48)
			{
				_putchar(result);
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 58)
					_putchar(' ');

				_putchar(result);
			}

		}

		_putchar('\n');
	}
}
