#include <stdio.h>
/**
 *main - To get all possible different combinations of three digits
 *Return: 0 (Successful)
 */
int main(void)
{
	int q;
	int r;
	int s;

	for (q = 48; q <= 55; q++)
	{
		for (r = 49; r <= 56; r++)
		{
		for (s = 50; s <= 57; s++)
			if (q < r && r < q)
			{
				putchar(q);
				putchar(r);
				putchar(s);
				if (q == 55 && r == 56 && s == 57)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	{
		putchar('\n');
	}
	return (0);
}
