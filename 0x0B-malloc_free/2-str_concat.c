#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int lS1, lS2, y, x;
	char *g;

	lS1 = 0;
	lS2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[lS1])
		lS1++;
	while (s2[lS2])
	{
		lS2++;
	}
	lS2++;
	g = (char *)malloc(sizeof(char) * (lS1 + lS2));
	if (g == NULL)
		return (NULL);
	for (y = 0; y < lS1; y++)
	{
		g[y] = s1[y];
	}
	for (x = 0, y = y; x < lS2 && y < (lS1 + lS2); x++, y++)
	{
		g[y] = s2[x];
	}
	return (g);
}
