#include "main.h"

/**
 * print_last_digit - prints last digit of an integer
 * @l: the integer
 * Return: the last digit
 */
int print_last_digit(int l)
{
	if (l <= 0)
		l = l * -1;

	l = l % 10;
	_putchar(l + '0');

	return (l);
}
