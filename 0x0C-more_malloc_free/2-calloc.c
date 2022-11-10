#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements in the array
 * @size: size for each element
 *
 * Return: void pointer to the reserved space
 * in memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);
	if (memory == NULL)
	{
		return (NULL);
	}

	return (memory);
}
