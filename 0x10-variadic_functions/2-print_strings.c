#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @seperator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: variable number of strings to be printed
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (index != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(strings);
}
