#include "main.h"
/**
 *print_alphabet_x10 - To print 10 times the alphabet, in lowercase
 *Return: 0 (Successful)
 */
void print_alphabet_x10(void)
{
	char p, q;

	for (q = 0; p < 10; p++)
	{
		for (q = 97; q < 123; q++)
		{
			_putchar(q);
		}
		_putchar('\n');
	}
}
