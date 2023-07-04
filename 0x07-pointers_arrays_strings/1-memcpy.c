#include "main.h"

/**
 * _memcpy - To print function that copies memory area
 * @dest: character
 * @src: character
 * @n: number of bytes
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int w;
	int e = n;

	for (w = 0; w < e; w++)
	{
		dest[w] = src[w];
		n--;
	}
	return (dest);
}
