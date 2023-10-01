#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input
 * integer
 * @n: The passed number
 * Description: This function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (is_prime_number(n / 2));
}
