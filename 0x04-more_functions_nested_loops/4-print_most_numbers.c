#include "main.h"

/**
 * print_most_numbers - function checks for checks for a digit (0 through 9)
 * @b: - var
 * Return: 0 (success)
 */

void print_most_numbers(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
		if (b != 50)
		{
			if (b != 52)
			{
				_putchar(b);
			}
		}
	}
	_putchar('\n');
}
