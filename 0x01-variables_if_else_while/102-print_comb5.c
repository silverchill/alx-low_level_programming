#include <stdio.h>
/**
 *main - To print all possible combinations of two two-digit numbers
 *Return: 0 (successful)
 */
int main(void)
{
	int g;
	int h;

	for (g = 0; g <= 98; g++)
	{
		for (h = 1; h <= 99; h++)
		{
			putchar((g / 10)) + '0';
			putchar((g % 10)) + '0';
			putchar(' ');
			putchar((h / 10)) + '0';
			putchar((h % 10)) + '0';

			if (g == 98 && h == 99)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
