#include "main.h"

/**
 *puts2 - To prints every other xter of a string, starting with the first xter
 *@str: String
 *Return: 0
 */
void puts2(char *str)
{
	int l, q;
	int p = 0;
	char *s = str;

	for (l = 0; *s != '\0'; l++)
	{
		s++;
	}
	p = l - 1;
	for (q = 0; q <= p; q++)
		if (q % 2 == 0)
	{
		_putchar(str[0]);
	}
	_putchar('\n');
}
