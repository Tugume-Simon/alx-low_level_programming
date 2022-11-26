#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

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

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	left_operand = atoi(argv[1]);
	right_operand = atoi(argv[3]);
	result = get_op_func(argv[2])(left_operand, right_operand);
	if (!result)
	{
		printf("Error...\n");
		exit(99);
	}

	printf("%d\n", result);
	return (0);
}
