#include "main.h"

/**
 * swap_int - Function that swaps the values of
 * two integers
 * @a: Pointer param 1
 * @b: Pointer param 2
 * Description: This function swaps the values of
 * two integers
 * Return: None (void)
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
