#include "main.h"

/**
 *print_times_table - To prints the n times table, starting with 0.
 *@n: no of times table
 *Return: 0
 */
void print_times_table(int n)
{
	int r, t, y;

	if (n >= 0 && n <= 15)
	{
		for (r = 0; r <= n; r++)
		{
			_putchar(48);
			for (t = 1; t <= n; t++)
			{
				y = r * t;
				_putchar(44);
				_putchar(32);
				if (y <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(y + 48);
				}
				else if (y <= 99)
				{
					_putchar(32);
					_putchar((y / 10) + 48);
					_putchar((y % 10) + 48);
				}
				else
				{
					_putchar(((y / 100) % 10) + 48);
					_putchar(((y / 10) % 10) + 48);
					_putchar((y % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
