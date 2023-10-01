#include "main.h"

/**
 * is_prime_recursive - is_prime_number recursive implementation
 * @n: The number
 * @d: The divisor
 * Description: This function is recursive impletation of
 * is_prime_number function
 * Return: 0 or 1
 */

int is_prime_recursive(int n, int d)
{
	if (n <= 1)
		return (0);

	if (n == 2)
		return (1);

	if (n % d == 0)
		return (0);

	if (d == n - 1)
		return (1);

	return (is_prime_recursive(n, d + 1));
}

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
	return (is_prime_recursive(n, 2));
}
