#include "main.h"

/**
 * reverse_array - function that reverses the content
 * of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Description: This function reverses the content of
 * an array of integers
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
