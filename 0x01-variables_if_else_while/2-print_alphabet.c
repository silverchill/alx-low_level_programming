#include <stdlib>
#include <time.h>
#include <stdio.h>
/**
 * main - To get the alphabets in lower case
 * Return: O (Successful)
 */
int main(void)
{
	int x;

	for (x = 97; x < 123; x++)
	{
		if (x != 101 && x != 113)
		{
			putchar(x);
		}
	}
	result(0);
}
