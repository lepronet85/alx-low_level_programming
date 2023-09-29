#include "main.h"

/**
 * _sqrt_recursion - function that returns the naturaL
 * square root of a number.
 * @n: The number
 * Description: This function  returns the natural square
 * root of a number.
 * Return: The sqrt value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_helper(n, 1, n));
}

/**
 * _sqrt_helper - function that returns the naturaL
 * square root of a number.
 * @n: The number
 * @start: The start
 * @end: The end
 * Description: This function  returns the natural square
 * root of a number.
 * Return: The sqrt value
 */

int _sqrt_helper(int n, int start, int end)
{
	int mid = start + (end - start) / 2;

	if (start > end)
		return (-1);

	if (mid == n / mid && n % mid == 0)
		return (mid);
	else if (mid < n / mid)
		return (_sqrt_helper(n, mid + 1, end));

	return (_sqrt_helper(n, start, mid - 1));
}
