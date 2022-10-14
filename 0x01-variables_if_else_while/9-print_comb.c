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
		if (j == 9)
		{
			putchar(48 + j);
		}
		else
		{
			putchar(48 + j);
			putchar(44);
			putchar(' ');
		}
		j++;
	}
	putchar('\n');

	return (0);
}
