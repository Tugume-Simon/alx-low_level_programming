#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - print integers from any number n to 98
 * @n: the number
 * Return: no return value (void)
 */
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			fprintf(stdout, "%d", i);

			if (i != 98)
				fprintf(stdout, "%s", ", ");
		}
	}

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			fprintf(stdout, "%d", i);

			if (i != 98)
				fprintf(stdout, "%s", ", ");
		}
	}
	fprintf(stdout, "%s", "\n");
}
