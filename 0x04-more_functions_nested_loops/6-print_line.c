#include "main.h"

/**
 * print_line - prints n underscores to form a line
 * @n: underscores count
 * Return: no return (void)
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}

