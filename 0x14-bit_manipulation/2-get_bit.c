#include "main.h"

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

	n >>= index;
	if (!n)
		return (-1);

	if (n & 1)
	{
		val = 1;
	}
	else
		val = 0;

	return (val);
}
