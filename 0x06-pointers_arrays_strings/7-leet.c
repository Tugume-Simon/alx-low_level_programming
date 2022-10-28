#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: given string
 *
 * Return: pointer to encoded string
 */

char *leet(char *str)
{
	int i = 0;
	int j;
	char leet[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char code[5] = {'4', '3', '0', '7', '1'};

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet[j])
			{
				str[i] = code[j % 5];
			}
		}
		i++;
	}
	return (str);
}
