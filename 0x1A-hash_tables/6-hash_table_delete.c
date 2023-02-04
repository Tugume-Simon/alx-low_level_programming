#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes the hash table
 * @ht: pointer to the hash table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int k;
	hash_node_t *node;
	hash_node_t *tmp;

	if (ht == NULL)
		exit(EXIT_FAILURE);

	for (k = 0; k < ht->size; k++)
	{
		node = (ht->array)[k];
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}

	free(ht->array);
	free(ht);
}

