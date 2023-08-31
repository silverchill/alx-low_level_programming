#include "main.h"

/**
 * print_binary - To write a function that prints the binary representation
 * of a number
 * @n: is the input printed value
 * Return: 0 on success
 */
void print_binary(unsigned long int n)
{
	unsigned long int present;
	int h = 63, count = 0;

	do {
		present = n >> h;

		if (present & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
		h--;
	} while (h >= 0);

	if (!count)
		_putchar('0');
}
