#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters and
 * initializes it with specific char
 * @size: size of the array
 * @c: the specific character
 *
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *g;
	unsigned int i;

	if (!(size > 0))
	{
		return (NULL);
	}

	i = 0;
	g = (char *)malloc(sizeof(char) * size);

	if (g == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		g[i] = c;
		i++;
	}
	return (g);
}
