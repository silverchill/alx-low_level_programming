#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - To print fxn that appends text to the end of a file
 * @filename: Is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nWrite, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)

	while (text_content[length])
	{
		length++;
	}

	nWrite = write(fd, text_content, length);
	if (nWrite == -1)
		return (-1);

	close(fd);
	return (1);
}
