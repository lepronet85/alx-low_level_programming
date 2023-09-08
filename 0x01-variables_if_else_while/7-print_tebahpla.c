#include <stdio.h>

/**
 * main - Program entry point
 * Prints the lowercase alphabet in reverse
 * Return: Return 0 to stop the program
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
