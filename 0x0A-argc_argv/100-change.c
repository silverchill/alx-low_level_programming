#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - To prints the minimum number of coins to make change
 * for an amount of money
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 1 Error, 0 Successful
 */

int main(int argc, char *argv[])

{
	int coins[] = {25, 10, 5, 2, 1};
	int n, q, r;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	r = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (q = 0; q < 5 && n >= 0; q++)
	{
		while (n >= coins[q])
		{
			r++;
			n -= coins[q];
		}
	}
	printf("%d\n", r);
	return (0);
}
