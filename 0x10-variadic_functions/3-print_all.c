#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types supplied
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	char f, l;
	char *s;
	int i, j;
	double fl;
	va_list ap;

	if (format == NULL)
		exit(EXIT_FAILURE);
	j = 0;
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
		(format[j + 1]) ? printf(", ") : printf("\n");
		j++;
	}
	va_end(ap);
}
