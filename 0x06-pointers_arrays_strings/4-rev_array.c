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
	int l;

	l = (n % 2 == 0) ? n / 2 : (n - 1) / 2;

	while (i < l)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
