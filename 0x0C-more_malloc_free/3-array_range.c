#include "main.h"
#include <stdlib.h>

/**
 * array_range - output numbers in a range
 * @min: starting point
 * @max: end
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int j;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	j = 0;
	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}

	return (arr);
}
