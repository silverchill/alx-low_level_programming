#include "function_pointers.h"

/**
 * int_index - To print a fxn that searches for an integer
 * @array: Is an array
 * @size: Is the number of elements in the array
 * @cmp: Is a pointer to the function to be used to compare values
 * Return: -1(no element matches), -1(size <= 0) otherwise 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	while (b < size)
	{
		{
			if (cmp(array[b]))
				return (b);
		}
		b++;
	}
	return (-1);
}
