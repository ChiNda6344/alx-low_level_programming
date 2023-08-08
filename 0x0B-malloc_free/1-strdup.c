#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies string to newly allocated space in memory
 * @str: string to copy to new memory
 * Return: pointer to new memory
 */

char *_strdup(char *str)
{
	char *abc;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	abc = malloc(sizeof(char) * (i + 1));

	if (abc == NULL)
		return (NULL);

	for (r = 0; str[r] != '\0'; r++)
		abc[r] = str[r];
	return (abc);
}
