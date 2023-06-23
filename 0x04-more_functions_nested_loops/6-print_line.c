#include "main.h"

/**
 *print_line - To draws a straight line in the terminal
 *@n: no of times to be printed
 *Return: 0
 */
void print_line(int n)
{
	int m = 1;

	if (m <= n)
	{
		_putchar('_');
		m++;
		{
			_putchar('\n');
		}
	}
	else
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	
}
