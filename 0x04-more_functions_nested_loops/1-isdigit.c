#include "main.h"

/**
 * _isdigit - checks for valid digits
 * @c: integer -- argument
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	int d;

	d = (c >= 48 && c <= 57) ? 1 : 0;

	return (d);
}
