#include "main.h"
#include <math.h>

/**
 * main - Program entry point
 * Desription: This program print prime factors of some
 * numbers
 * Return: None (void)
 */

int main(void)
{
	long number = 612852475143;
	long largest_prime = -1;
	long i;

	while (number % 2 == 0)
	{
		largest_prime = 2;
		number /= 2;
	}

	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			largest_prime = i;
			number /= i;
		}
	}

	if (number > 2)
	{
		largest_prime = number;
	}

	printf("%ld\n", largest_prime);

	return (0);
}
