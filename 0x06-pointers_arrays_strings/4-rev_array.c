#include "main.h"

/**
 * reverse_array - To reverses the content of an array of integers
 * @a: array
 * @n: number of array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int r, y;

	for (r = 0; r < n--; r++)
	{
		y = a[r];
		a[r] = a[n];
		a[n] = y;
	}
}
