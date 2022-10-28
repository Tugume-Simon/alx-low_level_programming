#include "main.h"

/**
 * string_toupper - convert string to uppercase
 * @c: pointer to string
 *
 * Return: uppercase string
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (*(c + i))
	{
		if (*(c + i) >= 97 && *(c + i) <= 122)
		{
			*(c + i) -= 32;
		}
		i++;
	}

	return (c);
}
