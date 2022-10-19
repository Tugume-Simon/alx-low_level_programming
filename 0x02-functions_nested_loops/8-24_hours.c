#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: no return value (void)
 */
void jack_bauer(void)
{
	int i, n, k;

	for (i = 0; i < 24; i++)
	{
		for (n = 0; n < 6; n++)
		{
			for (k = 0; k < 10 ; k++)
			{
				_putchar(i + '0');
				_putchar(' ');
				_putchar(n + '0');
				_putchar(k + '0');
				_putchar('\n');
			}
		}
	}
}
