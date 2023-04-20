#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters
 * @n: Number of arguments in a variable
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n is 0 the return 0
 *         Otherwise return the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int a, sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;

	for (a = 0; a < n; a++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
