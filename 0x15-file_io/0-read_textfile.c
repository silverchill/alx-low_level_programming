#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - To print fxn that reads a text file and
 * printsit to the POSIX standard output
 * 
 * @filename: Is the pointer Variable
 * @letters: Is the number of letters it should read and print
 * 
 * Return: the actual number of letters it could read and print, if the file
 * can not be opened or read, return 0, if filename is NULL return 0, if write
 * fails or does not write the expected amount of bytes, return 0
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
