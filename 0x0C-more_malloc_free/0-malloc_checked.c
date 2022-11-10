#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory with malloc()
 * @b: size of memory to be reserved
 *
 * Return: void pointer to space reserved
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	if (b == 0)
	{
		return (NULL);
	}
	m = malloc(b);
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}

	return (m);
}
