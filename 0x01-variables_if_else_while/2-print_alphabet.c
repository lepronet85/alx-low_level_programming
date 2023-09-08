#include <stdio.h>

/**
 * main - Program entry point
 * Print the alphabet in lowercase
 * Return: Return 0 to stop the program
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
