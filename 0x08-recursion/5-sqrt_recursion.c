#include "main.h"

/**
 * _sqrt_recursion - finds square root of a number
 * @n: number
 *
 * Return: positive square root of n
 */
int _sqrt_recursion(int n)
{
	float sqrt;
	static float Xn = 1;

	if (n < 0)
		return (-1);

	sqrt = Xn - ((Xn * Xn - n) / (2 * Xn));

	if ((int)sqrt == (int)Xn)
	{
		if ((int)sqrt == 1)
		{
			return (1);
		}
		else if (((int)sqrt * (int)sqrt) != n)
		{
			return (-1);
		}
		else
		{
			return (sqrt);
		}
	}

	Xn = sqrt;

	return (_sqrt_recursion(n));
}
