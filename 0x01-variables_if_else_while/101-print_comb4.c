#include <stdio.h>

/**
 * main - Program entry point
 * Prints all possible different combinations of three digits
 * Return: Return 0 to stop the program
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (i < j && i < k && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55) 
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
