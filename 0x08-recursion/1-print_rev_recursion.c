#include "main.h"

/**
 * _print_rev_recursion - To prints a string in reverse
 * @s: is an input
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
