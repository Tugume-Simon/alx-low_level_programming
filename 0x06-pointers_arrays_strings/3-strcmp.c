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
	int nS1 = 0;
	int nS2 = 0;

	while (s1[nS1] != '\0')
	{
		nS1++;
	}

	while (s2[nS2] != '\0')
	{
		nS2++;
	}

	return (nS1 - nS2);
}
