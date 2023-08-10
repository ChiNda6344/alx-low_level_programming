#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of block of memory
 * @size: size of element int
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	size_t j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = malloc(nmemb * size);
	if (i == NULL)
		return (NULL);
	for (j = 0; j < (nmemb * size); j++)
		i[j] = 0;
	return (i);
}
