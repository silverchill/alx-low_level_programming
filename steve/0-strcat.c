#include "main.h"

/**
 *_strcat - To print function that concatenates two strings
 *@dest: input value
 *@src: input value
 *Return: 0
 */

char *_strcat(char *dest, char *src)

{

	int i, t;

	for (i = 0; dest[i] != '\0'; i++)
	{
		while (src[t] != '\0')
		{
			dest[i] = src[t];
			i++;
			t++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
