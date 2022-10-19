#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: no return value (void)
 */
void jack_bauer(void)
{
	int i, n, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (n = 0; n < 10; n++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (i == 2 && n == 4)
					{
						break;
					}
					else
					{
						_putchar(i + '0');
						_putchar(n + '0');
						_putchar(' ');
						_putchar(k + '0');
						_putchar(l + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
