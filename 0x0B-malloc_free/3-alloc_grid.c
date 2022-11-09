#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints grid of numbers initalized to 0
 * @width: number of columns
 * @height: number of rows
 *
 * Return: double pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int **r;
	int i;
	int j;
	int l;
	int f;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	r = (int **)malloc(sizeof(int *) * height);
	if (r == NULL)
	{
		free(r);
		return (NULL);
	}
	f = 0;
	for (i = 0; i < height; i++)
	{
		*(r + i) = (int *)malloc(sizeof(int) * width);
		if (*(r + i) == NULL)
		{
			free(r[i]);
			free(r);
			f = 1;
			break;
		}
	}

	if (f == 1)
	{
		for (l = 0; l < i; l++)
			free(r[l]);
		free(r);
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			r[i][j] = 0;
			j++;
		}
		i++;
	}

	return (r);
}
