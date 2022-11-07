#include "main.h"

/**
 * main - prints command-line arguments provided
 * @argc: number of command-line arguments
 * @argv: pointer to array of strings -- the
 * command-line arguments provided
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int l;
	char c;

	i = 0;
	while (i < argc)
	{
		l = 0;
		while ((c = argv[i][l]))
		{
			_putchar(c);
			l++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
