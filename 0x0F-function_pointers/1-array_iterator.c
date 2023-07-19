#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - To print a fxn that executes a fxn given as a parameter
 * on each element of an array
 * @array: Is an array
 * @size: Is the size of the array
 * @action: Is a pointer to the fxn you need to use
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b = 0;

	if (array == NULL || action == NULL)
		return;
	while (b < size)
	{
		action(array[b]);
		b++;
	}
}
