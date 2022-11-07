#include "main.h"
#include <stdio.h>

/**
 * pow_10 - raises 10 to power i
 * @i: exponent
 *
 * Return: 10 power i
 */
int pow_10(int i)
{
	if (i == 0)
	{
		return (1);
	}
	return (10 * pow_10(i - 1));
}

/**
 * _atoi - converts character to integer
 * @c: pointer to string of number
 *
 * Return: integer
 */
int _atoi(char *c)
{
	int t;
	int i;

	while (*c != '\0')
	{
		c++;
	}

	c--;
	i = 0;
	t = 0;
	while (*c)
	{
		if (*c == '-')
			break;
		t = t + pow_10(i) * ((int)(*c) - 48);
		c--;
		i++;
	}
	return (t);
}

/**
 * main - multiplies two numbers provided from
 * command-line
 * @argc: number of command-line arguments
 * @argv: provided command-line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int arg1;
	int arg2;
	int prdt;

	if (argc < 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');

		return (1);
	}

	if (*argv[1] == '-')
	{
		argv[1]++;
		arg1 = -1 * _atoi(argv[1]);
	}
	else
	{
		arg1 = _atoi(argv[1]);
	}

	if (*argv[2] == '-')
	{
		argv[2]++;
		arg2 = -1 * _atoi(argv[2]);
	}
	else
	{
		arg2 = _atoi(argv[2]);
	}

	prdt = arg1 * arg2;

	printf("%d\n", prdt);
	return (0);
}
