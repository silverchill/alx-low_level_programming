#include "main.h"

/**
 *print_square - To prints a square
 *@size: is the size of the square
 */
void print_square(int size)
{
	int o, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (o = 0; o < size; o++)
		{
			for (p = 0; p < size; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
