#include <stdio.h>

/**
 * main - program entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n == 101 || n == 113)
		{
			++n;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
