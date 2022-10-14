#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, n, z;

	for (i = 0; i < 10; i++)
	{
		for (n = i + 1; n < 10; n++)
		{
			for (z = n + 1; z < 10; z++)
			{
				putchar(48 + i);
				putchar(48 + n);
				putchar(48 + z);
				if (!(i == 7 && n == 8 && z == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
