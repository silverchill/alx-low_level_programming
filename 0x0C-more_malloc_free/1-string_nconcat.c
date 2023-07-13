#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - To print a fxn that concatenates two strings
 * @s1: Is a string
 * @s2: Also a string
 * @n: Is the no of bytes
 * Return: pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int z = 0, x = 0, length1 = 0, length2 = 0;
	char *s;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		s = malloc((length1 + n + 1) * sizeof(char));
	else
		s = malloc((length1 + length2 + 1) * sizeof(char));

	if (!s)
		return (NULL);

	while (z < length1)
	{
		s[z] = s1[z];
		z++;
	}
	while (n < length2 && z < (length1 + n))
		s[z++] = s2[x++];
	while (n >= length2 && z < (length1 + length2))
		s[z++] = s2[x++];

	s[z++] = '\0';

	return (s);
}
