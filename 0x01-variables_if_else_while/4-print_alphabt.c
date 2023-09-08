#include <stdio.h>

/**
 * main - Program entry point
 * Print the alphabet except q and e
 * Return: Return 0 to stop the program
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (!(i == 101 || i == 113))
		putchar(i);
	}
	putchar('\n');
	return (0);
}
