#include "main.h"

/**
 * print_rev - prints the string in reverse order
 * @s: string pointer
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int k;
	int i = 1;

	while (*(s + i) != '\0')
	{
		i++;
	}

	for (k = i; k >= 0; k--)
	{
		_putchar(*(s + k));
	}
	_putchar('\n');
}
