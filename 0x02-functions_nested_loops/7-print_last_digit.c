#include "main.h"

/**
 * print_last_digit - prints last digit of an integer
 * @l: the integer
 * Return: the last digit
 */
int print_last_digit(int l)
{
	l = l % 10;
	_putchar(l);

	return (l);
}
