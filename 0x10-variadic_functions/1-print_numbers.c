#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - To print fxn that prints nos, followed by \n
 * @separator: Is the string to be printed between numbers
 * @n: Is the number of integers passed to the function
 * @...: Is the variadic fxn
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int d;

	va_start(ap, n);
	for (d = 0; d < n; d++)
	{
		printf("%d", va_arg(ap, int));

		if (d != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
