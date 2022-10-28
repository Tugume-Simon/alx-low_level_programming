#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if equal, negative if s1 < s2,
 * positive is s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff;

	while (s1[i] != '\0')
	{
		diff = s1[i] - s2[i];

		if (diff != 0)
			break;
		i++;
	}

	return (diff);
}
