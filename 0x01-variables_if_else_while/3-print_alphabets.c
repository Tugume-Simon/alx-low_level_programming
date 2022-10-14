#include <stdio.h>

/**
 * main - program entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	i = 65;
	while (i < 91)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
