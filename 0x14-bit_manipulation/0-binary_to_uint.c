#include "main.h"

/**
 * binary_to_uint - To write a function that converts a binary number
 * to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int z = 0;
	unsigned int base_ten = 0;

	if (b == NULL)
		return (0);

	do {
		if (b[z] > '1' || b[z] < '0')
			return (0);
		{
			base_ten = (b[z] - '0') + (base_ten * 2);
		}
		z++;
	} while (b[z]);

	return (base_ten);
}
