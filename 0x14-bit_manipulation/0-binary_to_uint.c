#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary number to
 * unsigned int
 * @b: pointer to string of 0's and 1's
 *
 * Return: the decimal of the given binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	unsigned int i;
	unsigned int d;
	unsigned int p;

	if (b == NULL)
	{
		return (0);
	}

	i = 0;
	while (*b != '\0')
	{
		if (!(*b >= 48 && *b < 58))
			return (0);
		b++;
		i++;
	}
	b--;
	p = 0;
	d = 0;
	while (i > 0)
	{
		x = *b - '0';
		d = d + (x << p);
		p++;
		b--;
		i--;
	}
	return (d);
}
