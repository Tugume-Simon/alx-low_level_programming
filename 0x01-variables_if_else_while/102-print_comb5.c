#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, x, z, d;
	
	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 10; x++)
		{
			for (z = 0; z < 10; z++)
			{
				for (d = 0; d < 10; d++)
				{
					if(!((i == x ) && (x == d) && (d == z)))
					{
						putchar(48 + i);
						putchar(48 + x);
						putchar(' ');
						putchar(48 + z);
						putchar(48 + d);
						putchar(44);
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
