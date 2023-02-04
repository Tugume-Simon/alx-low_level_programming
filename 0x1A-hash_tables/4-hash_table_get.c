#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: key, string
 *
 * Return: value associated with the key element or NULL if
 * it could not be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	char *val;
	hash_node_t *node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	val = NULL;
	for (i = 0; i < ht->size; i++)
	{
		node = (ht->array)[i];

		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
			{
				val = malloc(sizeof(node->value));

				if (val == NULL)
				{
					break;
				}
				val = node->value;
			}
			node = node->next;
		}

	}
	return (val);
}
