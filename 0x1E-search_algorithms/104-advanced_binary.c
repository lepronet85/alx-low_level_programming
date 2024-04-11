#include "search_algos.h"

/**
 * advanced_binary_recursive - searches for a value in a
 * sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: the lower bound of the search
 * @high: the upper bound of the search
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid;
	size_t i;

	if (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[high]);

		mid = (low + high) / 2;

		if ((mid == low || value != array[mid - 1]) && array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			return (advanced_binary_recursive(array, mid + 1, high, value));
		else
			return (advanced_binary_recursive(array, low, mid, value));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Advanced Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

