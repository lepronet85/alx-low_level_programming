#include "main.h"

/**
 * print_array - Function that prints n elements of
 * an array of integers
 * @a: First param
 * @b: Second param
 * Description: prints n elements of an array of integers,
 * followed by a new line.
 * Return: None (void)
 */

void print_array(int *a, int n)
{
	if (a == NULL || n <= 0) {
		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}
