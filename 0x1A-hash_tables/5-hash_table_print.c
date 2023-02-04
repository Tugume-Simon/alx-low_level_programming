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
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (j != 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			j++;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
