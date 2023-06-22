#include "main.h"

/**
 *more_numbers - To prints 10 times the numbers, from 0 to 14
 *Return: 0
 */
void more_numbers(void)
{
	int y, u;

	for (u = 0; y < 10; y++)
	{
		for (u = 48; u <= 57; u++)
		{
			_putchar(u);
		}
		_putchar('\n');
	}
}
