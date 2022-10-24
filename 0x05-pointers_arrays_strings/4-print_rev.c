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
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	for (k = i - 1; k >= 0; k--)
	{
		_putchar(*(s + k));
	}
	_putchar('\n');
}
