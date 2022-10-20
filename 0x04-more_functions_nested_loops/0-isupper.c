#include "main.h"

/**
 * _isupper - checks uppercase letters.
 * @c: integer for character
 * Return: integer, 1 if uppercase 0 otherwise
 */

int _isupper(int c)
{
	int i;

	if (c >= 65 && c <= 91)
	{
		i = 1;
	}
	else if (c >= 97 && c <= 122)
	{
		i = 0;
	}

	return (i);
}
