#include "main.h"

/**
 * print_sign - prints sign of an integer
 * @n: the integer
 * Return: an integer -- 1 if positive, 0 otherwise
 */
int print_sign(int n)
{
	int j;

	if (n > 0)
	{
		_putchar('+');
		j = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		j = 0;
	}
	else
	{
		_putchar('-');
		j = -1;
	}

	return (j);
}
