#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string pointer
 *
 * Return: count of string characters
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s++ != '\0')
	{
		l++;
	}

	return (l);
}
