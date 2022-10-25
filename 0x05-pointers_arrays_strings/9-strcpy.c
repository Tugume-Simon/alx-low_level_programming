#include "main.h"

/**
 * _strcpy - copies one string onto another
 * @dest: pointer to the string variable to copy onto
 * @src: pointer to the string to copy
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
