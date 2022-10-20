#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * Return: no return (void)
 */

void more_numbers(void)
{
	int i, k, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 2; i++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i != 0)
					_putchar(i + '0');
				_putchar(k + '0');

				if (k == 4 && i == 1)
					break;
			}
		}
		_putchar('\n');
	}
}
