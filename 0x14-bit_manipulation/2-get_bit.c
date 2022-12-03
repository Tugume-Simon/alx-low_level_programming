#include "main.h"
#include <stdio.h>

/**
 * get_bit - gets the value of a bit at given index.
 * @n: given integer
 * @index: index
 *
 * Return: bit at the index, -1 if error has occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;
	unsigned int i;
	unsigned long int y;

	y = n;
	i = 0;
	while (y >>= 1)
	{
		i++;
	}

	if (index > i)
		return (-1);

	n >>= index;
	if (n & 1)
	{
		val = 1;
	}
	else
		val = 0;

	return (val);
}
