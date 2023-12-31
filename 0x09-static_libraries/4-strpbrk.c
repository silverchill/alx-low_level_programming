#include "main.h"

/**
 *_strpbrk - To print a fxn that searches a string for any of a set of bytes
 *@s: character
 *@accept: Character
 *Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int e;

	while (*s)
	{
		for (e = 0; accept[e]; e++)
		{
			if (*s == accept[e])
				return (s);
		}
		s++;
	}
	return ('\0');
}
