#include <stdio.h>
/**
 *main - To get all possible different combinations of two digits using putchar
 *Return: 0 (Successful)
 */
int main(void)
{
	int u;
	int v;

	for (u = 48; u <= 56; u++)
	{
		for (v = 49; v <= 57; v++)
		{
			if (u < v)
			{
				putchar(u);
				putchar(v);
				putchar(',');
				putchar(' ');
				if (u != 56 || v != 57)
				{
					continue;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
