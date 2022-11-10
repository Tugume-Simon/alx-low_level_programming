#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *c;
	int n, i;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	c = argv[1];
	n = atoi(c);
	i = 0;

	if (n < 0)
		i = 0;
	if (n >= 25)
	{
		i += n / 25;
		n = n % 25;
	}
	if (n >= 10)
	{
		i += n / 10;
		n = n % 10;
	}
	if (n >= 5)
	{
		i += n / 5;
		n = n % 5;
	}
	if (n >= 2)
	{
		i += n / 2;
		n = n % 2;
	}
	if (n == 1)
		i += 1;
	printf("%d\n", i);
	return (0);
}
