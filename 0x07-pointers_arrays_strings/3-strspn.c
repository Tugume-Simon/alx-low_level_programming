#include "main.h"

/**
 * _strlen - counts the characters in a string
 * @str: string
 *
 * Return: integer -- length of string
 */
int _strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
 * _strspn - counts characters of string segment where
 * where the match of provided sub-string is found
 * @s: string
 * @accept: sub-string
 *
 * Return: integer -- count of segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int c;
	int flag;

	i = 0;
	c = 0;
	if (*s != '\0' && (_strlen(s) > _strlen(accept)))
	{
		while (*accept != '\0')
		{
			flag = 0;
			while (s[i] != '\0')
			{
				if (s[i] == *accept)
				{
					if (i > c)
					{
						c = i + 1;
					}
					if (s[c] != '\0')
						flag = 1;
					accept++;
					break;
				}
				i++;
			}

			if (flag == 0)
			{
				break;
				c = 0;
			}
			i = 0;
		}
	}
	return (c);
}
