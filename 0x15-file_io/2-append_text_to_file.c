#include "main.h"

/**
 * append_text_to_file - To print a fxn that appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nWrite, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_APPEND);
	if (fd == -1)
		return (-1);

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
