#include <stdio.h>

/**
 *main - prints the first 50 Fibonacci numbers
 *Return: 0 Successful
 */
int main(void)
{
	int k;
	long int f1, f2, nt;

	f1 = 1;
	f2 = 2;
	printf("%ld, %ld", f1, f2);
	for (k = 0; k < 48; k++)
	{
		nt = f1 + f2;
		printf(", %ld", nt);
		f1 = f2;
		f2 = nt;
	}
	printf("\n");
	return (0);
}
