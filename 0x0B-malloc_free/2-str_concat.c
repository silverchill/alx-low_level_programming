#include "main.h"

/**
 * str_concat - To print fxn that concatenates two strings
 * @s1: Is a string
 * @s2: Is also a string
 * Return: Null(failure)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int q = 0;
	unsigned int w = 0;
	unsigned int l1 = 0;
	unsigned int l2 = 0;
	char *s3;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	s3 = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s3 == NULL)
		return (NULL);
	if (s1)
	{
		while (q < l1)
		{
			s3[q] = s1[q];
			q++;
		}
	}
	if (s2)
	{
		while (q < (l1 + l2))
		{
			s3[q] = s2[w];
			q++;
			w++;
		}
	}
	s3[q] = '\0';
	return (s3);
}
