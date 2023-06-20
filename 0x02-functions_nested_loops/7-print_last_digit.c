#include "main.h"
/**
 *print_last_digit - To print last digit of a number
 *@f: Is an integer
 *Return: 0 Successful
 */
int print_last_digit(int f)
{
	int g;

	g = (f % 10);
	if (g < 0)
	{
		_putchar(-g + 48);
		return (-g);
	}
	else
	{
		_putchar(g + 48);
		return (g);
	}

}
