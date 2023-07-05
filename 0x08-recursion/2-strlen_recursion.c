#include "main.h"

/**
 * _strlen_recursion - To returns the length of a string
 * @s: is an input
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
