#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - To print fxn that print anything
 * @format: Is a list of types of arguments passed to the function
 * @...: Is the variadic function
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s, *separator = "";
	unsigned int t = 0;

	va_start(ap, format);

	while (format && format[t])
	{
		switch (format[t])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", separator,  va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", separator,  va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);

					if (s == NULL)
						printf("nil");
					printf("%s%s", separator, s);
					break;
				default:
					t++;
					continue;
		}
		separator = (", ");
		t++;
	}
	printf("\n");

	va_end(ap);
}
