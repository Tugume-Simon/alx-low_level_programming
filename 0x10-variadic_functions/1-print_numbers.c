#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers seperated by a character
 * @separator: the character or string between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argp;

	i = 0;
	va_start(argp, n);
	while (i < n)
	{
		printf("%d", va_arg(argp, int));
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
}
