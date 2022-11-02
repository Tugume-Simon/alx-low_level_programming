#include "main.h"
#include <stddef.h>

/**
 * _strlen - counts characters until if reaches the
 * null character
 * @str: address to string
 *
 * Return: length of a string
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strstr - locates the first occurance of substring
 * needle in the string haystack
 * @haystack: address of string to search
 * @needle: address of search string
 *
 * Return: pointer to the beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int flag;
	int i;
	int hl;
	int nl;
	char *p;

	hl = _strlen(haystack);
	nl = _strlen(needle);
	flag = 0;
	i = 0;
	if (*haystack != '\0' && *needle != '\0' && !(nl > hl))
	{
		while (haystack[i] != '\0')
		{
			if (haystack[i] == *needle)
			{
				break;
			}
			i++;
		}

		p = haystack + i;
		if ((hl - i) >= nl)
		{
			while (haystack[i] != '\0')
			{
				if (haystack[i] == *needle)
					flag = 1;
				else
				{
					flag = 0;
					break;
				}
				i++;
				needle++;
			}
		}
	}
	return ((flag == 0) ? NULL : p);
}
