#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all it's parameters
 * @n: number of parameters passed to the function
 * @...: variable number of parameters used to calculate the sum of
 * Return: 0 - if n == 0
 * else - the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j, sum = 0;

	va_start(ap, n);

	for (j = 0; j < n; j++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
