#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src
 * to memory area dest
 * @dest: memory address to copy to
 * @src: memory address to copy from
 * @n: count of bytes to copy
 *
 * Return: address of dest after copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
