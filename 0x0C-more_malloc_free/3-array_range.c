#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - To print fxn that creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *pointer, num, c;

	if (min > max)
		return (NULL);

	num = (max - min) + 1;

	pointer = malloc(num * sizeof(int));

	if (pointer == NULL)
		return (NULL);

	for (c = 0; min <= max; c++)
		pointer[c] = min++;

	return (pointer);
}
