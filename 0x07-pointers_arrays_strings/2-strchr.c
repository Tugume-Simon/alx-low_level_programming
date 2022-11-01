#include "main.h"

/**
 * _strchr - searches for a character in a string
 * @s: the string in which to search
 * @c: the query character
 *
 * Return: pointer to first occurrence of 'c' in 's'
 * NULL if no match found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			break;
		s++;
	}
	return (s);
}
