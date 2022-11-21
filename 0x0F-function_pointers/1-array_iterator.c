#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes  a function given as
 * a parameter on each element of the array
 * @array: the address of the array
 * @size: size of the array
 * @action: pointer to callback
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
	{
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
