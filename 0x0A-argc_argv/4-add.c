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
 * main - program entry point
 * @argc: number of arguments passed
 * to program
 * @argv: arguments passed to program
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	char g;
	int l;
	int sum;

	sum = 0;
	if (argc == 1)
	{
		_putchar(0 + '0');
		_putchar('\n');
	}

	for (i = 1; i < argc; i++)
	{
		l = 0;
		while ((g = argv[i][l]))
		{
			if (!(g >= 48 && g < 58))
			{
				_putchar('E');
				_putchar('r');
				_putchar('r');
				_putchar('o');
				_putchar('r');
				_putchar('\n');
				return (1);
			}
			l++;
		}
		sum = sum + _atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
