#include <stdio.h>
#include "main.h"

/**
 * print_binary - To print fxn that prints the binary representation of a num
 * @n: The number to be printed
 * Return: 0 (Successful)
 */
void print_binary(unsigned long int n)
{
	unsigned long int present;
	int h = 60, count = 0;

	while (h >= 0)
	{
		present = n >> h;

		if (present & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
		h--;
	}
	if (!count)
		_putchar('0');
}
