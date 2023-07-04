#include "main.h"

/**
 * _strspn - To print function that gets the length of a prefix substring 
 * @s: character
 * @accept: input 
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int q;
	unsigned int n;

	for (q = 0; accept[q]; q++)
	{
		if (*s == accept[q])
		{
			n++;
			break;
		}
		else if (accept[q + 1] == '\0')
			return (n);
	}
	return (n);
}
