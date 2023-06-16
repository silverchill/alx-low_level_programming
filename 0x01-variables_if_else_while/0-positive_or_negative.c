#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - To determine if a number is positive, negative or zero.
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d value is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d value is zero\n", n);
	}
	else
	{
		printf("%d value is negative\n", n);
	}
	return (0);
}
