#include "main.h"
#include <stdio.h>

/**
 * main - To print a program name, followed by a new line
 * @argc: no of argument
 * @argv: Is an array of argument
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
