#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0 (success)
 */
int main(void)
{
	int j = 0;

	while (j < 10)
	{
		putchar(48 + j);
		if (j != 9)
		{
			putchar(44);
			putchar(' ');
		}
		j++;
	}
	putchar('\n');

	return (0);
}
