#include "main.h"

/**
 * times_table - printing multiplication tables up to 9
 * Return: no return value (void)
 */
void times_table(void)
{
	int i, x, product, i1, i2;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 10; x++)
		{
			product = x * i;

			if (product > 9)
			{
				i1 = product / 10;
				i2 = product % 10;
				_putchar(i1 + '0');
				_putchar(i2 + '0');
			}
			else
			{
				_putchar(product + '0');
			}

			if (x != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
