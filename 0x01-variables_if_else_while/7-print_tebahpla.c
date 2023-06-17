#include <stdio.h>
/**
 *main - The get lower alphabet in reverse using putchar fxn
 *Return: 0 (Succesful)
 */
int main(void)
{
	int k = 122;

	for (k = 122; k >= 96; k--)
	{
		putchar(k);
	}
	{
		putchar('\n');
	}
	return (0);
}
