#include "main.h"
/**
 *_islower - To check lower case character
 *Return: 0 (Successful)
 */
int _lower(int c)
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
