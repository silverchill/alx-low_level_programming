#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - To print fxn that counts string length
 * @str: Is the string
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	
	return (len);
}

/**
 * create_file - To print a fxn that creates a file
 * @flename: Is the name of the file to create
 * @text_content: Is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nWrite;

	fd = open(filename, O_WRONLY | O_CREAT | 0_TRUNC, 0600);
}
