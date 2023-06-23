#include "main.h"

/**
 *more_numbers - To prints 10 times the numbers, from 0 to 14
 *Return: 0
 */
void more_numbers(void)
{
	int y, u;

	for (y = 0; y < 10; y++)
	{
		for (u = 0; u <= 14; u++)
		{
			if (u >= 10)
			_putchar('1');
			_putchar((u % 10) + '0');
		}
		_putchar('\n');
	}
}
