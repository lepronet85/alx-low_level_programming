#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: a pointer to the first node where value is located,
 * or NULL if value is not found or if head is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *prev;

	if (list == NULL)
		return (NULL);

	current = list;
	while (current != NULL)
	{
		prev = current;
		if (current->express != NULL)
			printf("Value checked at index [%lu] = [%d]\n",
				current->express->index, current->express->n);
		else
			printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

		if (current->express == NULL || current->express->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);
			while (prev->index <= current->index)
			{
				printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
				if (prev->n == value)
					return (prev);
				prev = prev->next;
				if (prev == NULL)
					break;
			}
			break;
		}
		current = current->express;
	}
return (NULL);
}

