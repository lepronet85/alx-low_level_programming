#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Applies a specified function to each element of an array.
 * @array: Pointer to the array to be processed.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}
