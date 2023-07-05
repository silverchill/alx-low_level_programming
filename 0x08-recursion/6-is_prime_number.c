#include "main.h"

/**
 * is_prime_number - To returns 1 if the input integer is a prime number, otherwise return 0
 * @n: is an interger
 * @Return: 1 otherwisw 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n > 1)
		return (1);
	return (_prime(n, n - 1));
}
