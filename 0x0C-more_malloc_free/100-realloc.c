#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer the memory previously allocated
 * @old_size: old memory size
 * @new_size: new memory size
 *
 * Return: pointer to new memory size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *mem;

	i = 0;
	if (ptr == NULL)
	{
		free(ptr);
		mem = malloc(new_size);
		if (mem == NULL)
		{
			free(mem);
			return (NULL);
		}
		while (i < new_size || old_size)
		{
			mem[i++] = 0;
		}
	}
	/*
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}

		if (new_size == old_size)
		{
			return (ptr);
		}

		mem = malloc(new_size);
		min = (new_size > old_size) ? old_size : new_size;
		if (mem == NULL)
		{
			free(mem);
			return (NULL);
		}
		while (i < min)
		{
			mem[i] = ((char *)ptr)[i];
			i++;
		}
	}
	*/

	return (mem);
}
