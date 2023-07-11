#include "main.h"

/**
 * free_grid - To print fxn that frees a 2 dimensional grid previously created
 * @grid: Is address of the two dimensional grid
 * @height: The grid height
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int c;

	if (grid == NULL || height == 0)
		return;
	for (c = 0; c < height; c++)
		free(grid[c]);
	free(grid);
}
