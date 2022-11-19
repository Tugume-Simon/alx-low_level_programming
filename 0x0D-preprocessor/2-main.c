#include "main.h"

/**
 * main - program entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char *c = __FILE__;

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}
