#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	char *g;
	int i;
	int k;

	if (str == NULL)
		return NULL;
	i = 0;
	while(str[i] != '\0' && str)
	{
		i++;
	}
	i++;

	g = (char *)malloc(sizeof(char) * i);
	
	if (g == NULL)
	{
		return (NULL);
	}

	for (k = 0; k <= i; k++)
	{
		g[k] = str[k];
	}
	return (g);
}
