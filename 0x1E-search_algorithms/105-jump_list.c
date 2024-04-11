#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: a pointer to the first node where value is located,
 * or NULL if value is not found or if list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, prev;
	listint_t *current;
	size_t i;

	if (list == NULL || size == 0)
		return (NULL);

	jump = sqrt(size);
	current = list;
	prev = 0;

	while (current->next != NULL && current->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		prev = current->index;
		for (i = 0; current->next != NULL && i < jump; i++)
			current = current->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, current->index);

	printf("Value checked at index [%lu] = [%d]\n", prev,
		((listint_t *)current)->n);
	while (prev < current->index && ((listint_t *)current)->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (((listint_t *)current)->n == value)
			return ((listint_t *)current);
		prev++;
		current = current->next;
	}

	return (NULL);
}

