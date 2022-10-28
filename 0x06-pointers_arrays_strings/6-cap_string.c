#include "main.h"

/**
 * cap_string - capitalizes every word in a string
 * @s: string
 *
 * Return: pointer to capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;
	int j;
	char seperators[] = {',', '\t', '\n', ';', '.', ' ',
		'(', ')', '{', '}', '!', '?', '\"'};
	int sep_len = sizeof(seperators);

	while (s[i] != '\0')
	{
		for (j = 0; j < sep_len; j++)
		{
			if (i == 0 && (s[i] >= 97 && s[i] <= 122))
				s[i] -= 32;

			if (s[i] == seperators[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] -= 32;
				}
			}
		}
		i++;
	}
	s[i] = '\0';

	return (s);
}
