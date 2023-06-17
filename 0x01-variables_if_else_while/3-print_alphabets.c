#include <stdio.h>
/**
 * main - To print alphabet in lower case and upper case
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int s = 97;
	int b = 65;

	while (s <= 122)
	{
		putchar(s);
	}
	while (b <= 90)
	{
		putchar(b);
	}
	{
		putchar('\n');
	}
	return (0);
}
