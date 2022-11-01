#include "main.h"

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
	int flag = 0;

	i = 0;
	c = 0;
	if (*s != '\0')
	{
		while (*accept != '\0')
		{
			while (s[i])
			{
				if (s[i] == *accept)
				{
					if (i > c)
					{
						c = i + 1;
					}
					flag = 1;
					accept++;
					break;
				}
				i++;
			}

			if (flag == 0)
				break;
			i = 0;
		}
	}
	return (c);
}
