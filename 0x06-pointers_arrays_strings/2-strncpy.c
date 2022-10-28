#include "main.h"

/**
 * _strncpy - copies one string into variable,
 * replacing what is stored there
 * @dest: destination
 * @src: source string
 * @n: count
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = *(src + j);
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
