#include "main.h"

/**
 *print_diagonal - To diagonal line on the terminal
 *@n: is the number of times the character \ should be printed
 *Return: 0
 */
void print_diagonal(int n)
{
	int e, r;

	if (n <= 0)
	{
			_putchar('\n');
	}
	else
	{
		for (e = 0; e < n; e++)
		{
			for (r = 0; r < n; r++)
			{
				if (r == e)
					_putchar('\\');
				else if (r < e)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
