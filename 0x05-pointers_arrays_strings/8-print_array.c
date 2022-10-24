#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of the array
 * @a: array
 * @n: elements to print
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));

		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
