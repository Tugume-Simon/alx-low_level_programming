#include "main.h"

/**
 * _isalpha - function -- checks if a character is an alphabet
 * @c: the character
 *
 * Return: an integer -- 1 if true, 0 otherwise
 */
int _isalpha(int c)
{
	int i;

	if ((c >= 65 && c <= 91) || (c >= 97 && c <= 122))
	{
		i = 1;
	}
	else
	{
		i = 0;
	}

	return (i);
}
