#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: address of an integer array
 * @size: size of the array
 * @cmp: callback
 *
 * Return: On success, index of the first element
 * for which cmp does not return 0
 * On failure -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int isFound = -1;

	if (array == NULL || cmp == NULL)
	{
		exit(EXIT_FAILURE);
	}

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
		{
			isFound = i;
			break;
		}
		i++;
	}
	return (isFound);
}
