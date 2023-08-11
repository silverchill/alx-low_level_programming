#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * create_file - To print a fxn that creates a file
 * @flename: Is the name of the file to create
 * @text_content: Is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nWrite, len = 0;
	
	if (filename == NULL)
		return (-1);
	
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (text_content != NULL)

	while (text_content[len])
	{
		len++;
	}
	
	nWrite = write(fd, text_content, len);

	if (nWrite == -1)
		return (-1);

	close(fd);
	return (1);
}
