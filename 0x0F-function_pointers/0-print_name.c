#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - To print a fxn that print a name
 * @name: pointer to character
 * @f: pointer to a fxn
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
