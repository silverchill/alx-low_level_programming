#include "main.h"

/**
 *_strncat - To print function that concatenates two strings
 *@dest: input value
 *@src: input value
 *@n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{

	int w = 0;
	int e = 0;

	while (dest[w] != '\0')
	{
		w++;
	}
	while (e < n && src[e] != '\0')
	{
		dest[w] = src[e];
		w++;
		e++;
	}
	dest[w] = '\0';
	return (dest);
}
