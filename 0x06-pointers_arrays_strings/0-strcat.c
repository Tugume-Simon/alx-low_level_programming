#include "main.h"

/**
 * _strcat - appends source string to destination string overwriting null character
 * @dest - destination string
 * @src - source string
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*src)
	{
		*(dest + i) = *src;
		src++;
		i++;
	}

	return dest;
}
