#include "main.h"

/**
 * times_table - printing multiplication tables up to 9
 * Return: no return value (void)
 */
void times_table(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 10; x++)
		{
			_putchar(x);
			if (x != 9)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
