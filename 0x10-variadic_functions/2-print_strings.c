#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_strings - To print a fxn that print strings followed by \n
 * @separator: Is the string to be printed between the strings
 * @n: Is the number of strings passed to the function
 * @...: Variadic function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int f;
	char *str;

	va_start(string, n);

	for (f = 0; f < n; f++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (f != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(string);
}
