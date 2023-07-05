#include "main.h"

/**
 * _sqrt_recursion - To returns the natural square root of a number
 * @n: input no
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}
