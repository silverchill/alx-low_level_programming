#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
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
	ssize_t num_Read, num_Write;
	
	if (filename == NULL)
		return (0);

	fd = open("filename", O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	
	num_Read = read(fd, buffer, sizeof(buffer));
	close(fd);

	if (num_Read == -1)
	{
		free(buffer);
		return (0);
	}
	num_Write = write(STDOUT_FILENO, buffer, num_Read);
	free(buffer);

	if (num_Write != num_Read)
		return (0);
	return (num_Write);
}
