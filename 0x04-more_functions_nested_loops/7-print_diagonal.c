#include "main.h"

/**
 *print_diagonal - To diagonal line on the terminal
 *@n: is the number of times the character \ should be printed
 *Return: 0
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		_putchar('\\');
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
