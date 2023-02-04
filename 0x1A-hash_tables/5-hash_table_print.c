#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int j;

	if (ht == NULL)
		exit(EXIT_FAILURE);

	j = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;

		tmp = ht->array[i];
		do {
			printf("'%s': '%s', ", tmp->key, tmp->value);
			tmp = tmp->next;
		} while (tmp != NULL);
		j++;
	}
	if (j > 0)
		printf("\b\b}\n");
	else
		printf("}\n");
}
