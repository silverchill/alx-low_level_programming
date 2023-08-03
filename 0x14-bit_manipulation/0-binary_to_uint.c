#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - To print fxn that converts a binary number
 * to an unsigned int
 *
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1, b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base_10 = 0;
	int y = 0;

	if (!b)
		return (0);

	while (b[y])
	{
		if (b[y] > '1' || b[y] < '0')
			return (0);
		{
			base_10 = (b[y] - '0') + (base_10 * 2);
		}
		y++;
	}
	return (base_10);
}
