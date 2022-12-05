#include "main.h"

/**
 * clear_bit - sets the value of bit to 0 at given index
 * @n: address of integer
 * @index: index of bit
 *
 * Return: 1 if it worked, -1 if it failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int y;

	if (index >= (sizeof(long) * 8))
		return (-1);

	y = *n;
	y >>= index;

	if (y & 1)
	{
		y = y - 1;
	}

	while (index)
	{
		y <<= 1;
		index--;
	}
	*n = *n | y;
	return (1);
}
