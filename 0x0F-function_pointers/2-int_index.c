#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - returns index if comparison - true, else -1
 * @array: the array
 * @size: number of elements in  array
 * @cmp: pointer to the function of one of the 1 in main
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (a = 0; a <= size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
