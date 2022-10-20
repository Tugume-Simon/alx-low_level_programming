#include "main.h"

/**
 * print_triangle - prints a triangular pattern with hashes.
 * @size: lines occupied
 * Return: no return (void)
 */

void print_triangle(int size)
{
	int i, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (k = i + 1; k < size; k++)
			{
				_putchar(' ');
			}

			for (k = size - i - 1; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
