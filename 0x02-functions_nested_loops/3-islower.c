#include "main.h"

/**
 * _islower - checks for lowercase letters
 * @c: integer -- ASCII number for a character
 *
 * Return: an integer -- 1 if true, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 65 && c <= 91)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
}
