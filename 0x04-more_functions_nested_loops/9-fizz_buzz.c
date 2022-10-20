#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			fprintf(stdout, "FizzBuzz ");
		if (i % 3 == 0)
			fprintf(stdout, "Fizz ");
		else if (i % 5 == 0)
			fprintf(stdout, "Buzz ");
		else
			fprintf(stdout, "%d ", i);
	}
	fprintf(stdout, "\n");

	return (0);
}
