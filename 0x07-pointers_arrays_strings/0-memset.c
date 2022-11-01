#include "main.h"

/**
 * _memset - fills the first n bytes of memory area
 * pointed to by s with the constant byte b
 * @s: pointer to character
 * @b: one constant byte
 * @n: number of bytes to consider
 *
 * Return: character pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
