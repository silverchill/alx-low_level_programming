#include "main.h"

/**
 * _pow_recursion - To returns the value of x raised to the power of y
 * @x: value to be raised
 * @y: The power
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
