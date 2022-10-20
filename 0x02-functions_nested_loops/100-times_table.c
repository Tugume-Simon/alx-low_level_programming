#include "main.h"

/**
 * print_times_table - printing multiplication tables up to n
 * @n: an integer
 * Return: no return value (void)
 */
void print_times_table(int n)
{
	int i, x, product, i1, i2;

	if (!( n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (x = 0; x <= n; x++)
			{
				product = x * i;

				if (product > 9)
				{
					i1 = product / 10;
					i2 = product % 10;
					_putchar(i1 + '0');
					_putchar(i2 + '0');

					if (x != n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					if (x != 0)
						_putchar(' ');
					_putchar(product + '0');
					if (x != n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}

			}
			_putchar('\n');
		}
	}
}
