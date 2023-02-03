#include "hash_tables.h"

/**
 * key_index - finds the index of a given key using
 * the dbj2 algorithm
 * @key: key, string
 * @size: size of the array of the hash table
 *
 * Return: index at which the key/value pair should
 * be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
