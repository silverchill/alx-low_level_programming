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
		for (y = 0; y <= 9; y++)
		{
			z = w * y;
			if (w == 0)
			{
				_putchar(z + 0);
			}
			if (z <= 9 && w != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(w + 0);
			}
			else if (w >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((w / 10) + 0);
				_putchar((w % 10) + 0);
			}
		}
	}
	_putchar('\n');
}
