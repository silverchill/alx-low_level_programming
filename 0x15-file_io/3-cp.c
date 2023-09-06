#include "main.h"

/**
 * mistake_file - To check if files can be opened.
 * @file_from: Is where the file is coming from
 * @file_to: Is where the file is going to
 * @argv: Is the argument vector.
 * Return: It does not return.
 */
void mistake_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - a program that copies the content of a file to another file
 * @argc: Is the argument count.
 * @argv: Is the argument vector.
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int file_from, file_to, mis_close;
	ssize_t nChar, nWrite;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	mistake_file(file_from, file_to, argv);

	nChar = 1024;
	while (nChar == 1024)
	{
		nChar = read(file_from, buffer, 1024);
		if (nChar == -1)
			mistake_file(-1, 0, argv);
		nWrite = write(file_to, buffer, nChar);
		if (nWrite == -1)
			mistake_file(0, -1, argv);
	}

	mis_close = close(file_from);
	if (mis_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	mis_close = close(file_to);
	if (mis_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
