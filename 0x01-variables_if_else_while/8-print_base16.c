#include <stdio.h>
/**
 *main - To prints all the numbers of base 16 in lowercase
 *Return: 0 (Successful)
 */
int main(void)
{
	int y;
	int z;

	for (y = 48; y < 58; y++)
	{
		putchar(y);
	}
	for (z = 97; z < 103; z++)
	{
		putchar(z);
	}
	{
		putchar('\n');
	}
	return (0);
}
