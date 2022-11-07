#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of command-line arguments
 * @argv: array of strings -- the command-line
 * arguments
 *
 * Return: Always 0;
 */
int main(__attribute__ ((unused)) int argc, char *argv[])
{
	char k;

	while ((k = *argv[0]++))
	{
		_putchar(k);
	}
	_putchar('\n');
	return (0);
}
