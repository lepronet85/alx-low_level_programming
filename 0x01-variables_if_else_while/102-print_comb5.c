#include <stdio.h>

/**
 * main - Program entry point
 * Prints all possible different combinations of three digits
 * Return: Return 0 to stop the program
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			int tens_i = i / 10;
			int ones_i = i % 10;
			int tens_j = j / 10;
			int ones_j = j % 10;

			if (i != j)
			{
				putchar((char)(tens_i + '0'));
				putchar((char)(ones_i + '0'));
				putchar(' ');
				putchar((char)(tens_j + '0'));
				putchar((char)(ones_j + '0'));

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
