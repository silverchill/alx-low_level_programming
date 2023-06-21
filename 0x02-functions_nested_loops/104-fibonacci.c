#include <stdio.h>

/**
 *main - To find and prints the first 98 Fibonacci numbers
 *Return: 0
 */
int main(void)
{
	int w, boolean, boolean2;
	long int f1, f2, nt, nt2, n11, n22;

	f1 = 1;
	f2 = 2;
	boolean = boolean2 = 1;
	printf("%ld, %ld", f1, f2);
	for (w = 0; w < 96; w++)
	{
		if (boolean)
		{
			nt = f1 + f2;
			printf(", %ld", nt);
			f1 = f2;
			f2 = nt;
		}
		else
		{
			if (boolean2)
			{
				n11 = f1 % 1000000000;
				n22 = f2 % 1000000000;
				f1 = f1 / 1000000000;
				f2 = f2 / 1000000000;
				boolean2 = 0;
			}
			nt2 = (n11 + n22);
			nt = f1 + f2 + (nt2 / 1000000000);
			printf(", %ld", nt);
			printf("%ld", nt2 % 1000000000);
			f1 = f2;
			n11 = n22;
			f2 = nt;
			n22 = (nt2 % 1000000000);
		}
		if (((f1 + f2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}
