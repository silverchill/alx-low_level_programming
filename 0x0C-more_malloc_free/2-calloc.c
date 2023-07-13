#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - To print fxn that allocates memory for an array
 * @nmeb: memory of an array
 * @size: size of element
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);

	if (pointer == NULL)
		return (NULL);

	return (pointer);
}
