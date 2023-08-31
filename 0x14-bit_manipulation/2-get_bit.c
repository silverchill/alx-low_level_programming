#include "main.h"


/**
 * get_bit - To write a function that returns the value of a bit
 * at a given index
 * @n: Is the input value
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = 1 & (n >> index);

	return (value);
}
