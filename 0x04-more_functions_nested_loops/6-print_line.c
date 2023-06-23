#include "main.h"

/**
 *print_line - To draws a straight line in the terminal
 *@n: no of times to be printed
 *Return: 0
 */
void print_line(int n)
{
	if (n > 1)
	{
		_putchar('_');
		_putchar('\n');
	}
	else
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	
}
