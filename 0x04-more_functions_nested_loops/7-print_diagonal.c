#include "main.h"

/**
 * print_diagonal - draw diagnal line on the screen
 * @n: lines of the diagonal
 * Return: no return (void)
 */

void print_diagonal(int n)
{
	int i, l;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (l = 0; l < i; l++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
