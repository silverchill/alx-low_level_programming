#include "main.h"

/**
 *print_array - To prints n elements of an array of integers
 *@a: element of an array
 *@n: element of an array
 *Return: 0
 */
void print_array(int *a, int n)
{
	int g;

	for (g = 0; g < (n - 1); g++)
	{
		printf("%d, ", a[g]);
	}
	if (g == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
