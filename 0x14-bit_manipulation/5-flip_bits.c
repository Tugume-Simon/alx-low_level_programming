#include "main.h"

/**
 * flip_bits - indicates bits that varry between 2
 * numbers
 * @n: integer 1
 * @m: integer 2
 *
 * Return: number of bits that one needs to flip in
 * order to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	count = 0;
	n = n ^ m;
	while (n)
	{
		if (n & 1)
		{
			count++;
		}
		n >>= 1;
	}

	return (count);
}
