#include "main.h"
#include <stdio.h>
/**
 * _isupper - a program that checks for uppercase character
 * @c: new variable
 * Return: 0 (success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
