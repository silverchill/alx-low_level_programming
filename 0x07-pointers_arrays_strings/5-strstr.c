#include "main.h"

/**
 * _strstr - To print a function that locates a substring
 * @haystack: Is an input
 * @needle: Is an input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		while (haystack == needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
	}
	return (0);
}
