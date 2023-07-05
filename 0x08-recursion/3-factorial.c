#include "main.h"

/**
 * factorial - To factorial of a given number
 * @n: is an input
 * Return: n factorial
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	if (n < 1)
		return (-1);
	return (n * factorial(n - 1));
}
