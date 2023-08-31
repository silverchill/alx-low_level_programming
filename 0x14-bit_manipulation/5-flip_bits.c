#include "main.h"

/**
 * flip_bits - To write a function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: Is the first member no
 * @m: Is the second member no
 * Return: The no of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int present, total = n ^ m;
	int f = 63, count = 0;

	do {
		present = total >> f;

		if (present & 1)
		{
			count++;
		}
		f--;
	} while (f >= 0);

	return (count);
}
