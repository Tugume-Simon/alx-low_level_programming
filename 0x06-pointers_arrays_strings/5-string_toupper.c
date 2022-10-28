#include "main.h"

/**
 * string_toupper - convert string to uppercase
 * @c: pointer to string
 *
 * Return: uppercase string
 */

char *string_toupper(char *c)
{
	while (*c != '\0')
	{
		if (*c >= 97 && *c <= 122)
		{
			*c = *c - 32;
		}
		c++;
	}

	return (c);
}
