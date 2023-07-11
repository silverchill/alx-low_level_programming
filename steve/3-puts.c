#include "main.h"

/**
 *_puts - To print a string
 *@str: a string
 *Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
