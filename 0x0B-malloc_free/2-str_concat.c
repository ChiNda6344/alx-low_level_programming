#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: ponter to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int a;
	char *abc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		s1len++;
	for (a = 0; s2[a] != '\0'; a++)
		s2len++;

	abc = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (abc == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		abc[a] = s1[a];
	for (a = 0; s2[a] != '\0'; a++)
		abc[s1len + a] = s2len[a];
	return (abc);
}
