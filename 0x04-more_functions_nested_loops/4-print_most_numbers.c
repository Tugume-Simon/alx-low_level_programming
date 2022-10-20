#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 apart from 2 and 4
 * Return: no return (void)
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
