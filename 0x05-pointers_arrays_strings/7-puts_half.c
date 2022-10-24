#include "main.h"

/**
 * puts_half - prints last half of a string
 * @str: pointer to string
 *
 * Return: no return
 */

void puts_half(char *str)
{
	int n = 0;
	int i = 0;
	int start;

	while (*(str + i) != '\0')
	{
		n = n + 1;
		i++;
	}

	if (n % 2 != 0)
	{
		start = 1 + (n - 1) / 2;
	}
	else
	{
		start = n / 2;
	}

	for (i = start; i < n; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
