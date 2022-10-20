#include "main.h"

/**
 * _isupper - checks uppercase letters.
 * @c: integer for character
 * Return: integer, 1 if uppercase 0 otherwise
 */

int _isupper(int c)
{
	int i;

	i = (c >= 65 && c <= 91) ? 1 : 0;

	return (i);
}
