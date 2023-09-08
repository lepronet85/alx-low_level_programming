#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The entry point of the program
 * Print The string
 * Return: Return 0 to stop the program
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	} else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_digit);
	} else if (last_digit != 0 && last_digit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	}
	return (0);
}
