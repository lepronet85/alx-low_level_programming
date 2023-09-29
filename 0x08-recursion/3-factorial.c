#include "main.h"

/**
 * factorial - Function that returns the factorial of a
 * given number
 * @n: Given number
 * Description: This function returns the factorial of a
 * given number.
 * Return: Factorial of given number
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
