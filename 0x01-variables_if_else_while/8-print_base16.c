#include <stdio.h>

/**
 * main - Program entry point
 * Prints all the numbers of base 16 in lowercase
 * Return: Return 0 to stop the program
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
