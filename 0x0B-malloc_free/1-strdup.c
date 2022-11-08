#include "main.h"
#include <stdlib.h>

/**
 * _strdup - reserves memory to a given string
 * and copies it to that space
 * @str: the string
 *
 * Return: pointer to newly allocated space in memory
 * containing a copy of the string provided.
 */
char *_strdup(char *str)
{
	int i;
	int s;
	char *g;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}

	g = (char *)malloc(sizeof(char) * i);
	if (g == NULL)
	{
		return (NULL);
	}

	for (s = 0; s < i; s++)
	{
		g[s] = str[s];
	}

	return (g);
}
