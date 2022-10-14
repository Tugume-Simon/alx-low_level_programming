#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;
	int n = 0;

	do {
		for (n = i + 1; n < 10; n++)
		{
			putchar(48 + i);
			putchar(48 + n);

			if (!(i == 8 && n == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	} while (i < 10);
	putchar('\n');

	return (0);
}
