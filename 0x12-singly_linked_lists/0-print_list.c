#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: The list
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	printf("[");

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("%s", h->str);
		else
			printf("(nil)");
		count++;

		if (h->next != NULL)
			printf(", ");

		h = h->next;
	}
	printf("]\n");

	return (count);
}
