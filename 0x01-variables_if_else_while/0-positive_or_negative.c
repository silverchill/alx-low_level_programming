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
		printf("value of %d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("value of n is zero %d\n", n);
	}
	else
	{
		printf("value of n is negative, %d\n", n);
	}
	return (0);
}
