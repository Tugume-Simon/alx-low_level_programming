#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code
 *
 * Return: Always 0.
 */
int main(__attribute__((unused)) int ac, __attribute__((unused)) char *av[])
{
	char *s;

	s = argstostr(0, NULL);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
