#include "main.h"

/**
 * get_endianness - To write a function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int g = 1;
	char *s = (char *)&g;

	return (*s);
}
