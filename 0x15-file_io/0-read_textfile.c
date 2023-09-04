#include "main.h"
#include <stddef.h>


/**
 * read_textfile - To print a fxn that reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: The numbers of printed letters
 * @letters: is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t nRead, nWrite;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	if (filename == NULL)
		return (0);

	buffer = malloc(letters * sizeof(char));

	nRead = read(fd, buffer, letters);
	if (nRead == -1)
		return (0);

	nWrite = write(STDOUT_FILENO, buffer, nRead);
	if (nWrite != nRead)
		return (0);

	free(buffer);
	close(fd);

	return (nWrite);
}
