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
	unsigned int i;
	char *z;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);
	z = (char *)memory;
	if (memory == NULL)
	{
		free(memory);
		return (NULL);
	}

	i = 0;
	while (i < nmemb)
	{
		*(z + i) = 0;
		i++;
	}

	return (memory);
}
