#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: Printing sizes of C inbuilt types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", unsigned(sizeof(char)));
	printf("Size of an int: %d byte(s)\n", unsigned(sizeof(int)));
	printf("Size of a long int: %d byte(s)\n", unsigned(sizeof(long int)));
	printf("Size of a long long int: %d byte(s)\n", unsigned(sizeof(long long int)));
	printf("Size of a float: %d byte(s)\n", unsigned(sizeof(float)));	
	return (0);
}
