#include "main.h"

/**
 * times_table - printing multiplication tables up to 9
 * Return: no return value (void)
 */
void times_table(void)
{
	int i, x, product;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 10; x++)
		{
			product = x * i;
			_putchar(product + '0');
			if (x != 9)
			{
				_putchar(' ');
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
