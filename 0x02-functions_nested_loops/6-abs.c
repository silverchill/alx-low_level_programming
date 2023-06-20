#include "main.h"

/**
 *_abs - To computes the absolute value of an integer
 *@x: is a int
 * Return: absolute value (Successful)
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
}
