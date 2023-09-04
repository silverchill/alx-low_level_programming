#include "main.h"

/**
 * mistake_file - To check if files can be opened.
 * @src: Is where the file is coming from
 * @dest: Is where the file is going to
 * @argv: Is the argument vector.
 * Return: It does not return.
 */
void mistake_file(int src, int dest, char *argv[])
{
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest == -1)
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
	int src, dest, mis_close;
	ssize_t nChar, nWrite;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp src dest");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	mistake_file(src, dest, argv);

	nChar = 1024;
	while (nChar == 1024)
	{
		nChar = read(src, buffer, 1024);
		if (nChar == -1)
			mistake_file(-1, 0, argv);
		nWrite = write(dest, buffer, nChar);
		if (nWrite == -1)
			mistake_file(0, -1, argv);
	}

	mis_close = close(src);
	if (mis_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}

	mis_close = close(dest);
	if (mis_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	return (0);
}
