#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: no return value
 */

void swap_int(int *a, int *b)
{
	int tmp_int;

	tmp_int = *a;
	*a = *b;
	*b = tmp_int;
}
