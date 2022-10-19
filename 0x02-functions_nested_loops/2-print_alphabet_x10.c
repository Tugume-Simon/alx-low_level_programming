#include "main.h"

/**
 * print_alphabet_x10 - function
 * Return: no return (void)
 */
void print_alphabet_x10(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
	_putchar('\n');
}
