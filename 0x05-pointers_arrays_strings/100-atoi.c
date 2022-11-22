#include "main.h"

/**
 * _atoi - converts a number in a string to an integer type
 * @s: string with the number
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int k;
	int i = 0;
	int n = 0;
	char c = *(s + i);
	char g[10];
	char *p = g;

	while (c != '\0')
	{
		if (!(c >= '0' && c <= '9') && c == '-')
		{
			n = n + 1;
		}

		if (c >= '0' && c <= '9')
		{
			k = i;
		}

		i++;
	}

	i = 0;

	while (*(s + k + i) >= '0' && *(s + k + i) <= '9')
	{
		*(p + i) = *(s + k + i);
		i++;
	}

	return (1);
}	
