#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - The sum of the two diagonals of a square matrix of integers
 *@a: is an input
 *@size: is an input
 *Return: 0
 */
void print_diagsums(int *a, int size)
{
	int Sum1 = 0;
	int Sum2 = 0;
	int x;

	for (x = 0; x < size; x++)
	{
		Sum1 = Sum1 + a[(x * size) + x];
	}
	for (x = (size - 1); x >= 0; x--)
	{
		Sum2 += a[(x * size) + (size - x - 1)];
	}
	printf("%d, %d\n", Sum1, Sum2);
}
