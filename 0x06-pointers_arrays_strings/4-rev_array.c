#include "main.h"

/**
 * reverse_array - reverses integer array
 * @a: given array
 * @n: number of elements in a
 *
 * Return: no return (void)
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i = 0;

	while (i <= n / 2)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
