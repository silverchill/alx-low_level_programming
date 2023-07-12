#include "main.h"
#include <stdio.h>

/**
 * main - To prints all arguments it receives
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int d;
	(void) argc; /* This helps to ignore argv */

	for (d = 0; d < argc; d++)

	printf("%s\n", argv[d]);
	return (0);
}
