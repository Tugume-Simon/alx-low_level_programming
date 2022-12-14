#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of bit to 0 at given index
 * @n: address of integer
 * @index: index of bit
 *
 * Return: 1 if it worked, -1 if it failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *arr;
	int i, l = index;

	if (index >= (sizeof(long) * 8))
		return (-1);

	arr = malloc(sizeof(long) * l);
	i = 0;
	while (i <= (l - 1))
	{
		arr[i] = *n & 1;
		*n >>= 1;
		i++;
	}

	if ((*n) & 1)
	{
		*n -= 1;
	}

	while (i)
	{
		*n <<= 1;
		*n = *n + arr[i - 1];
		i--;
	}
	free(arr);

	return (1);
}
