#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int get_formats(const char * const f);
/**
 * print_all - prints anything
 * @format: list of types supplied
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	char *s, f, l;
	int i, j = 0, n;
	double fl;
	va_list ap;

	if (format == NULL)
	{
		printf("\n");
		exit(1);
	}
	n = get_formats(format);
	va_start(ap, format);
	while ((f = format[j]))
	{
		switch (f)
		{
			case 'c':
				l = va_arg(ap, int);
				printf("%c", l);
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%d", i);
				break;
			case 'f':
				fl = va_arg(ap, double);
				printf("%0.6f", fl);
				break;
			case 's':
				s = va_arg(ap, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				j++;
				continue;
		}
		(j != (n - 1)) ? printf(", ") : printf("%s", "");
		j++;
	}
	printf("\n");
	va_end(ap);
}

/**
 * get_formats - counts format specifiers in format string
 * provided
 * @f: address of the format string
 *
 * Return: number of characters in the format string
 */
int get_formats(const char * const f)
{
	int i;

	i = 0;
	while (f[i])
	{
		i++;
	}
	return (i);
}
