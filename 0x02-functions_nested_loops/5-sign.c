#include "main.h"
/**
 *print_sign - To print the sign of a number
 *@n: Is a character
 *Return: 1 is greater than 0, 0 is zero and -1 is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar(0);
		return (-1);
	}
	_putchar('\n');
}
