#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - To print that reallocates a memory block using malloc and free
 *
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: newly allocated space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_ptr, *new_ptr;
	unsigned int e;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	new_ptr = malloc(new_size);

	if (new_ptr)
		return (NULL);

	old_ptr = ptr;

	if (old_size < new_size)
	{
		for (e = 0; e < old_size; e++)
			new_ptr[e] = old_ptr[e];
	}

	if (old_size > new_size)
	{
		for (e = 0; e < new_size; e++)
			new_ptr[e] = old_ptr[e];
	}
	free(ptr);
	return (new_ptr);
}
