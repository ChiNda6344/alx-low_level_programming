#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - 2 dimennsional array
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int a, i;
	int **abc;

	if (width <= 0 || height <= 0)
		return (NULL);

	abc = malloc(sizeof(int *) * height);

	if (abc == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		abc[a] = malloc(sizeof(int) * width);

		if (abc[a] == NULL)
		{
			free(abc);
			for (i = 0; i <= height; i++)
				free(abc[i]);
			return (NULL);
		}
		for (i = 0; i < width; i++)
			abc[a][i] = 0;
	}
	return (abc);
}
