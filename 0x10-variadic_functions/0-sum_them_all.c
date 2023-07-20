#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - To print a fxn that returns the sum of all its parameters
 * @n: An unsigned int
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int b, sum = 0;

	va_start(ap, n);
	for (b = 0; b < n; b++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}

