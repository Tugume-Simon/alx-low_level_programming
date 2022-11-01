#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: address of string to search
 * @accept: address of search string
 *
 * Return: address of string after location
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int flag;

	while (*s != '\0')
	{
		i = 0;
		flag = 0;
		while (accept[i] != '\0')
		{
			if (accept[i] == *s)
			{
				flag = 1;
				break;
			}
			i++;
		}
		if (flag == 1)
			break;
		s++;
	}
	return (s);
}
