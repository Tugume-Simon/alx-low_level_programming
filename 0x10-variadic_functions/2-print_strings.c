#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings with a separator in between
 * @separator: string to separate arguments
 * @n: number of provided arguments
 *
 * Return: Nothing
 */
void print_strings(const char *separator, unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			printf("(nil)");
		else
		{
			printf("%s", str);
			if (separator != NULL && i != (n - 1))
			{
				printf("%s", separator);
			}
		}
		i++;
	}
	printf("\n");
}
