#include <stdio.h>
/**
 *main - To print natural numbers
 *Return: 0 successful
 */
int main(void)
{
	int h, m;

	for (h = 1; h < 1024; h++)
	{
		if ((h % 3) == 0 || (h % 5) == 0)
			m += h;
	}
	printf("%d\n", m);
	return (0);
}
