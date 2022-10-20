#include "main.h"

/**
 * print_square - print squares with hashtags
 * @size: square width
 * Return: no return (void)
 */

void print_square(int size)
{
	int i, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
