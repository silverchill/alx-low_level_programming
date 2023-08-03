#include <stdio.h>
#include "main.h"

/**
 * flip_bits - To print fxn that returns the number of bits you would need to
 * flip to get from one number to another
 *
 * @n: The first member number
 * @m: The second member number
 *
 * Return: The number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int present, total = n ^ m;
	int d = 63, count = 0;

	while (d >= 0)
	{
		present = total >> d;
		if (present & 1)
		{
			count++;
		}
		d--;
	}
	return (count);

}
