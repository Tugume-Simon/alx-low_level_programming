#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - joins strings from provided
 * arguments by newline
 * @ac: number of arguments
 * @av: pointer to string arguments
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int n, k, c;
	char *rstr;
	char g;

	if (ac == 0 || av == NULL)
		return (NULL);

	c = 0;
	for (n = 1; n < ac; n++)
	{
		k = 0;
		while (av[n][k])
		{
			c++;
			k++;
		}
	}

	rstr = (char *)malloc(sizeof(char) * (c + 2 * n));
	if (rstr == NULL)
		return (NULL);
	c = 0;
	for (n = 1; n < ac; n++)
	{
		k = 0;
		while ((g = av[n][k]))
		{
			rstr[c] = g;
			c++;
			k++;
		}
		rstr[c] = '\n';
		c++;
	}

	return (rstr);
}
