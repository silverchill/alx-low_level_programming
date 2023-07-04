#include "main.h"

/**
 * _memset - To fills memory with a constant byte
 * @s: character
 * @b: character
 * @n: number of bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
