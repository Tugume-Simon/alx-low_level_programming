#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

int is_empty(const char *str);
char *_strcpy(char *dest, char *src);
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

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	/*
	if (is_empty(key))
		return (0);
	*/
	
	index = key_index((unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	node->key = malloc(sizeof(key));
	node->value = malloc(sizeof(value));

	if (node == NULL || node->key == NULL || node->value == NULL)
	{
		return (0);
	}

	_strcpy(node->key, (char *)key);
	_strcpy(node->value, (char *)value);
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

/**
 * is_empty - checks whether a given string is an empty string
 * @str: string
 *
 * Return: 1 on success, 0 on failue
 */
int is_empty(const char *str)
{
	int i;

	i = 0;
	while (*str++)
	{
		i++;
	}

	if (i > 0)
		return (0);

	return (1);
}

/**
 * _strcpy - copies characters from one location to another
 * @dest: destination
 * @src: source
 *
 * Return: pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	char c;
	int i;

	if (dest == NULL || src == NULL)
		return (NULL);

	i = 0;
	while ((c = *src) != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}

	return (dest);
}
