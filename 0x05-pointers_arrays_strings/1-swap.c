#include "main.h"

/**
 *swap_int - To print the function that swaps the values of two integers
 *@a: an input to swap
 *@b: an input to swap
 *Return: n
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
