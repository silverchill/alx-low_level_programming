#include "main.h"

/**
 * create_array - To print array of chars, and initializes it with a char
 * @size: Is the size of array
 * @c: The character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int u;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (u = 0; u < size; u++)
		str[u] = c;
	return (str);
}
