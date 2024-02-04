#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to the head of the list
 * Returns: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
 	size_t size = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		size++;
		temp = current;
		current = current->next;

		if (temp <= current)
		{
			*h = NULL;
			free(temp);
			return (size);
		}

		free(temp);
	}

	*h = NULL;

	return (size);
}

