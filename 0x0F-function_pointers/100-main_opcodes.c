#include <stdlib.h>
#include <stdio.h>

/**
 * main - To prints the opcodes of its own main fxn
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, r;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;
	for (r = 0; r < bytes; r++)
	{
		if (r == bytes - 1)
		{
			printf("%02hhx\n", array[r]);
			break;
		}
		printf("%02hhx", array[r]);
	}
	return (0);
}
