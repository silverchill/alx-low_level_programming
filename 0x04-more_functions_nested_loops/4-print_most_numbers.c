#include "main.h"

/**
 *print_most_numbers - To prints the numbers, from 0 to 9
 *Return: 0
 */
void print_most_numbers(void)
{
	int v;

	for (v = 48; v <= 57; v++)
	{
		if (v == 50 && v == 52)
		{
			v++;
			continue;
		}
		_putchar(v);
	}
	_putchar('\n');
}
