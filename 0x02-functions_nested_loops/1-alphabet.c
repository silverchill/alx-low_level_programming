#include "main.h"
/**
 *print_alphabet - Print lower letter
 *Return: Always 0.
 */
void print_alphabet(void)
{
	char r;

	for (r = 97; r < 123; r++)
	{
		_putchar(r);
	}
	_putchar('\n');
}
