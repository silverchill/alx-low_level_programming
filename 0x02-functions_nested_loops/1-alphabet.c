#include "main.h"
/**
 *print_alphabet - Print lower letter
 *Return: Always 0.
 */
void print_alphabet(void);
{
	char j;

	for (j = 97; j < 123; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	return (0);
}
