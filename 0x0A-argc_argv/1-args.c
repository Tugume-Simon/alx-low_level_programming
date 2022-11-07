#include "main.h"

/**
 * main - prints number of command-line arguments
 * passed to it minus the program name
 * @argc: number of command-line arguments
 * @argv: array pointer to strings -- the command-line
 * arguments
 *
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	_putchar((argc - 1) + '0');
	_putchar('\n');

	return (0);
}
