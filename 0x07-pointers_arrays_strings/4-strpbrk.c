#include "main.h"

/**
 *_strpbrk - 
 *@s:
 *@accept:
 *Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int e;

	while (*s)
	{
		while (e == 0)
		{
			accept[e];
			e++;
			{
				if (*s == accept[e])
					return (s);
			}
		}
		s++;
	}
	return ('\0');
}
