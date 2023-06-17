#include <stdio.h>
/**
 *main - To get all possible combinations of single-digit numbers
 *Return: 0 (Successful)
 */
int main(void)
{
	int r;

	for (r = 48; r < 58; r++)
	{
		putchar(r);
		if (r == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	{
		putchar('\n');
	}
	return (0);
}
