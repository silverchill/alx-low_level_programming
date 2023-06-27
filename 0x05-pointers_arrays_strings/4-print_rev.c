#include "main.h"

/**
 *print_rev - To print a string in reverse
 *@s: A string
 *Return: length
 */
void print_rev(char *s)
{
	int l, m;

	for (l = 0; *s != '\0'; s++)
	{
		l++;
	}
	for (m = l; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
