#include "main.h"

/**
 *puts_half - To prints half of a string
 *@str: string
 *Return: 0
 */
void puts_half(char *str)
{
	int g, h, l;
	l = 0;

	for (g = 0; str[g] != '\0'; g++)
		l++;
	h = (l / 2);
	if ((l % 2) == 1)
		h = ((l + 1) / 2);
	for (g = h; str[g] != '\0'; g++)
		_putchar(str[g]);
	_putchar('\n');
}
