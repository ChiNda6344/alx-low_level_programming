#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string to be searched
 * @c: The string to be located
 * Return: if c is found - a pointer to the first occurence
 * If c is not found - NULL
 */

char *_strchr(char *s, char c);
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
