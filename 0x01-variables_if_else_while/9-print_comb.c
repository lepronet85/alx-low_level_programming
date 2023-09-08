#include <stdio.h>

/**
 * main - Program entry point
 * Prints all possible combinations of single-digit numbers
 * Return: Return 0 to stop the program
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(' ');
		if (i < 57)
			putchar(',');
	}
	putchar('\n');
	return (0);
}
