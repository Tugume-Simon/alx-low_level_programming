#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_count - counts the characters in a string
 * @str: provided string
 *
 * Return: number of characters in a string
 */
unsigned int str_count(char *str)
{
	unsigned int x;

	x = 0;
	while (*(str + x))
	{
		x++;
	}
	return (x);
}

/**
 * string_nconcat - concatenates two strings considering
 * only first n bytes
 * of second string
 * @s1: first string
 * @s2: second string
 * @n: number of characters to get from s2
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int c1;
	unsigned int c2;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	c1 = str_count(s1);
	c2 = str_count(s2);

	if (n >= c2)
		n = c2;

	c = malloc(sizeof(char) * (c1 + n + 1));
	if (c == NULL)
	{
		free(c);
		return (NULL);
	}

	for (i = 0; i < c1; i++)
	{
		c[i] = s1[i];
	}

	for (i = c1; i < (n + c1); i++)
	{
		c[i] = s2[i - c1];
	}
	c[i] = '\0';

	return (c);
}
