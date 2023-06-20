#include "main.h"
/**
 *_isalpha - To check alphabet characters
 *@c: Is a character
 *Return: 1 if c is lowercase or upper case and 0 if otherwise
 */
int _isalpha(int c)
{
	for ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
