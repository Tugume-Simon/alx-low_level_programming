#include "main.h"

/**
 * is_prime_number - checks if an integer is prime or not
 * @n: given integer
 *
 * Return: 1 if n is prime & 0 otherwise
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 0 || n == 1 || n == 0)
	{
		return (0);
	}

	while (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
