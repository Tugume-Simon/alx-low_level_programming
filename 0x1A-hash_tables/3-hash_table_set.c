#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to a hash table
 * @ht: pointer to the hash table
 * @key: key, string
 * @value: value associated with the key
 *
 * Return: 1 on success, 0 on failue
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *tmp;

	if (ht == NULL)
		return (0);

	if (key == NULL || strcmp(key, "") == 0)
		return (0);

	if (strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	node->key = malloc(sizeof(key));
	node->value = malloc(sizeof(value));

	if (node == NULL || node->key == NULL || node->value == NULL)
	{
		return (0);
	}

	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;

	if ((ht->array)[index] == NULL)
		(ht->array)[index] = node;
	else
	{
		tmp = (ht->array)[index];
		(ht->array)[index] = node;
		node->next = tmp;
	}

	return (1);
}

