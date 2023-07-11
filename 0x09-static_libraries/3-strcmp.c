#include "main.h"

/**
 * _strcmp - To print a function that compares two strings
 * @s1: Is the input value
 * @s2: Is the input value
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int p = 0;

	while (s1[p] != '\0' && s2[p] != '\0')
	{
		if (s1[p] != s2[p])
		{
			return (s1[p] - s2[p]);
		}
		p++;
	}
	return (0);
}
