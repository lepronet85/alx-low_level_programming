#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The main entry point of the program
 * Displays text based on the value of n
 * Return: Return 0 to stop the program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
