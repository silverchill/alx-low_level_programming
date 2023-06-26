#include "main.h"

/**
 *_strlen - To print a function that returns the length of a string
 *@s: a string
 *Return: length
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; l++)
	{
		_putchar(l);
	}
	return (l);
}
