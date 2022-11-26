#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - performs operation on 2 integers
 * @argc: number of commandline arguments
 * @argv: commandline arguments provided
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int result;
	int left_operand;
	int right_operand;
	char *l;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	l = (strlen(argv[2]) > 1) ? "0" : argv[2];
	if (!(l[0] == '/' || l[0] == '+' || l[0] == '-' || l[0] == '*' || l[0] == '%'))
	{
		printf("Error\n");
		exit(99);
	}

	left_operand = atoi(argv[1]);
	right_operand = atoi(argv[3]);

	if ((l[0] == '/' || l[0] == '%') && right_operand == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2])(left_operand, right_operand);

	printf("%d\n", result);
	return (0);
}
