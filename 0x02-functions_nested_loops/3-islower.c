#include "main.h"

/**
 * _islower - checks for lowercase letters
 * @c: integer -- ASCII number for a character
 *
 * Return: an integer -- 1 if true, 0 otherwise
 */
int _islower(int c)
{
	int i;

	if (c >= 97 && c <= 122)
	{
		i = 1;
	}
	else if (c >= 65 && c <= 91)
	{
		i = 0;
	}

	return (i);
}
