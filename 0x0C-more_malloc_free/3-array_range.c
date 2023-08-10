#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: input value
 * @max: input value
 *
 * Return: int pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int a, b;
	int *i;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	i = malloc(sizeof(int) * b);
	if (i == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		i[a] = min;
		min++;
	}
	return (i);
}
