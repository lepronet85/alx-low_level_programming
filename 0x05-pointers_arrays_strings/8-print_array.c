#include "main.h"

/**
 * print_array - Function that prints n elements of
 * an array of integers
 * @a: First param
 * @n: Second param
 * Description: prints n elements of an array of integers,
 * followed by a new line.
 * Return: None (void)
 */

void print_array(int *a, int n)
{
	int i;

	if (a == NULL)
		return;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
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
