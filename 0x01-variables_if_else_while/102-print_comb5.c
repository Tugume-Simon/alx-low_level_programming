#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;
	int z = 0;
	int y = 0;
	int x = 0;

	do {
		while (z < 10)
		{
			while (x < 10)
			{
				while (y < 10)
				{
					putchar(48 + i);
					putchar(48 + z);
					putchar(' ');
					putchar(48 + x);
					putchar(48 + y);
					putchar(',');
					putchar(' '); 
					y++;
				}
				x++;
			}	
			z++;
		}
		i++;
	} while (i < 10);

	putchar('\n');

	return (0);
}
