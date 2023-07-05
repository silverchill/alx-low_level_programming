#include "main.h"

/**
 *print_triangle - To prints a triangle
 *@size: is the size of the triangle
 *Return: 0
 */
void print_triangle(int size)
{
	int q, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (q = 0; q <= size; q++)
		{
			for (w = 0; w < size; w++)
			{ 
				if (w < q)
					_putchar('#');
				else if (w > q)
					_putchar(' ');
			}
			_putchar('\n');
		}

}
