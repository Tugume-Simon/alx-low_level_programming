#include <stdio.h>
#include <string.h>

/**
 * main - program entry point
 *
 * @str: string
 *
 * Return: Always 0 (success)
 */
void printstr(char *str);

int main(void)
{
	printstr("_putchar");

	return (0);
}

/**
 * printstr - function
 * @str: string
 *
 * Description: user defined function for printing a string
 */
void printstr(char *str)
{
	int i;
	int l = strlen(string);

	for (i = 0; i < l; i++)
	{
		putchar(string[i]);
	}
	putchar('\n');
}
