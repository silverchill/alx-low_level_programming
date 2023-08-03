#include <stdio.h>
#include "main.h"

/**
 * get_endianness - To print fxn that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int d = 1;
	char *e = (char *)&d;

	return (*e);
}
