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

	if (ht == NULL || key == NULL)
		return (NULL);

	val = NULL;
	for (i = 0; i < ht->size; i++)
	{
		if ((ht->array)[i] == NULL)
			continue;

		if (strcmp(((ht->array[i])->key), key) == 0)
		{
			val = malloc(sizeof(((ht->array)[i])->value));

			if (val == NULL)
			{
				break;
			}
			val = ((ht->array)[i])->value;
		}
	}
	return (val);
}
