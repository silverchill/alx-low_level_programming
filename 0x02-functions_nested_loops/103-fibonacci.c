#include <stdio.h>

/**
 *main - finds and prints the sum of the even-valued terms - Fibonacci
 *Return: 0
 */
int main(void)
{
	long int f1, f2, nt, ant;

	f1 = 1;
	f2 = 2;
	nt = ant = 0;
	while (nt <= 4000000)
	{
		nt = f1 + f2;
		f1 = f2;
		f2 = nt;
		if ((f1 % 2) == 0)
		{
			ant += f1;
		}
	}
	printf("%ld\n", ant);
	return (0);
}
