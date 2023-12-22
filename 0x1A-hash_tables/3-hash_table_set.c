#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add/update the key/value pair
 * @key: The key string
 * @value: The value associated with the key
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int index;
	char *new_value;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return 0;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		hash_node_t *temp = ht->array[index];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				new_value = strdup(value);
				if (new_value == NULL)
					return (0);
				free(temp->value);
				temp->value = new_value;
				return (1);
			}
			temp = temp->next;
		}
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);

	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
    }

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

