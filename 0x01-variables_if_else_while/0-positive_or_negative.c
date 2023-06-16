#include <stdlib.h>
#include <time.h>
/**
 * main - The description of positive or negative
 * 
 * Result: 0 (successful)
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf ("value of n is positive: %d\n", n);
	}
	else if (n == 0)
	{
		printf ("value of n is zero: %d\n", n);
	}
	else (n < 0)
	{
		printf ("value of n is negative: %d\n", n);
	}
	return (0);
}
