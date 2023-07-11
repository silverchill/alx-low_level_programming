#include "main.h"

/**
 * alloc_grid - To print a pointer to a 2 dimensional array of integers
 * @width: Is the width
 * @height: Is the height
 * Return: NULL(failure)
 */
int **alloc_grid(int width, int height)
{
	int z, x, **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (z = 0; z < height; z++)
	{
		array[z] = (int *) malloc(sizeof(int) * width);
		if (array[z] == NULL)
		{
			free(array);
			for (x = 0; x <= z; x++)
				free(array[x]);
			return (NULL);
		}
	}
	for (z = 0; z < height; z++)
	{
		for (x = 0; x < width; x++)
		{
			array[z][x] = 0;
		}
	}
	return (array);
}
