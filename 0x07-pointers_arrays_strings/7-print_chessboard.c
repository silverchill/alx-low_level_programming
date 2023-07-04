#include "main.h"

/**
 * print_chessboard - To prints the chessboard
 * @a: Is an array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int q, w;

	for (q = 0; q < 8; q++)
	{
		for (w = 0; w < 8; w++)
			_putchar(a[q][w]);

		_putchar('\n');
	}
}
