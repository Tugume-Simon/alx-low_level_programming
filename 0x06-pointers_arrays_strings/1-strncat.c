#include "main.h"

/**
 * _strncat - concatenate two strings up to n characters
 * of second one
 * @dest: destination
 * @src: source
 * @n: count
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	n = n + i;

	while (i < n)
	{
		if (!*src)
			break;
		else
			*(dest + i) = *src;
		src++;
		i++;
	}

	return (dest);
}
