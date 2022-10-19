#include "main.h"

/**
 * _abs - print absolute of an integer
 * @r: integer
 * Return: integer -- the absolute
 */
int _abs(int r)
{
	if (r > 0)
		r = r;
	else
		r = r * -1;

	return (r);
}
