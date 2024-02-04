#include <stdio.h>
#include "function_pointers.c"

/**
 * int_index - Searches for an integer in an array using a specified
 * comparison function.
 * @array: Pointer to the array to be searched.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function used to compare values.
 *
 * Return: Index of the first element for which the cmp function does not
 * return 0.
 *         If no element matches or size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
