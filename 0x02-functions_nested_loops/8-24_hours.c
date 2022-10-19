#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: no return value (void)
 */
void jack_bauer(void)
{
	int i, n, k, l, flag = 1;

	for (i = 0; i <= 2; i++)
	{
		for (n = 0; n < 10; n++)
		{
			if (flag == 0)
				break;
			for (k = 0; k < 6; k++)
			{
				if (flag == 0)
					break;
				for (l = 0; l < 10; l++)
				{
					if (i == 2 && n == 4)
					{
						flag = 0;
						break;
					}

					_putchar(i + '0');
					_putchar(n + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
