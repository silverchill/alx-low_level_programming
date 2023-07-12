#include "main.h"
#include <stdio.h>

/**
 * main - To prints the number of arguments passed into it
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /* This code helps the program to ignore argv */

	printf("%d\n", argc - 1);
	return (0);
}
