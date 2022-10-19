#include "main.h"

/**
 * print_last_digit - prints last digit of an integer
 * @l: the integer
 * Return: the last digit
 */
int print_last_digit(int l)
{
	long int n = l;

	if (n < 0)
		n = n * -1;

	n = n % 10;
	_putchar(n + '0');

	return ((int)n);
}
