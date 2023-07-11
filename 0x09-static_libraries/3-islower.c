#include "main.h"
/**
 *_islower - To check lower case character
 *@c: Is a character
 * Return: 1 for lower case and 0 for others
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
