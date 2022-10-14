#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = i + 1; n < 10; n++)
		{
			putchar(48 + i);
			putchar(48 + n);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
