#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * word_count - counts words in a string
 * @s: provided string
 *
 * Return: number of words in a string
 */
int word_count(char *s)
{
	int i;
	int wc;

	i = 0;
	wc = 0;
	while (*s == ' ')
	{
		s++;
	}

	while (s[i])
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
		{
			wc++;
		}
		i++;
	}

	return (wc);
}

/**
 * strtow - splits a string into words
 * @str: provided string
 *
 * Return: pointer to string array
 */
char **strtow(char *str)
{
	int i, j, r;
	int count;
	int *w;
	char c;
	char **s;

	i = 0;
	j = 0;
	r = 0;
	if (str == NULL)
		return (NULL);

	count = word_count(str);
	w = (int *)malloc(sizeof(int) * count);
	s = (char **)malloc(sizeof(char *) * count + 1);
	if (s == NULL)
		return (NULL);

	while ((c = str[i]) && r < count)
	{
		if (c == ' ' && str[i - 1] && str[i - 1] != ' ')
		{
			w[r] = j;
			*(s + r) = (char *)malloc(sizeof(char) * j + 1);
			r += 1;
			j = 0;
		}
		if (c != ' ')
			j++;
		i++;
	}

	i = 0;
	r = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (!str[i - 1] || str[i - 1] == ' '))
		{
			for (j = 0; j < w[r]; j++)
			{
				s[r][j] = str[i];
				i++;
			}
			r = r + 1;
		}
		i++;
	}
	free(w);

	return (s);
}
