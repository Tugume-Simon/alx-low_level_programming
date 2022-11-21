#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - computes sum of all its arguments
 * @n: first and a must argument
 *
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	return (sum);
}	
