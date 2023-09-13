#include "main.h"

/**
 * times_table - Function that prints 9 times table
 * Description: This function prints the 9 times table, starting with 0
 * Return: None (void)
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
					_putchar(' ');

				if (result >= 10)
				{
					_putchar(resultat / 10 + '0');
					_putchar(resultat % 10 + '0');
				}
				else
				{
					_putchar(result + '0');
				}
			}

		}

		_putchar('\n');
	}
}
