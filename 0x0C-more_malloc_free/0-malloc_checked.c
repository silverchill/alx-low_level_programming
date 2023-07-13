#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - To print fxn that allocates memory
 * @b: no of bytes
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
