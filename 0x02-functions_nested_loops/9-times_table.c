#include "main.h"

/**
 *times_table - To print 9 times table
 *Return: 0 Successful
 */
void times_table(void)
{
	int w, y, z;

	for (w = 0; w <= 9; w++)
	{
		_putchar('0');
		for (y = 0; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');

			z = w * y;

			if (z <= 9)
				_putchar(' ');
			else
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
		}
	_putchar('\n');
	}
	}
}
