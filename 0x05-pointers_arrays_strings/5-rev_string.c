#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string
 *
 * Return: no return
 */

void rev_string(char *s)
{
	char tmp;
	int n = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		n = n + 1;
		i++;
	}

	for (i = 0; i < n / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + (n - 1 - i));
		*(s + (n - 1 - i)) = tmp;
	}
}
