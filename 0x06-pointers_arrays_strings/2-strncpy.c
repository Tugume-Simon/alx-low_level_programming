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
	int i = 0;

	while (i < n)
	{
		dest[i] = *(src + i);
		i++;
	}

	return (dest);
}
