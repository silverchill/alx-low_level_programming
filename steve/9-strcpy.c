#include "main.h"

/**
 **_strcpy - To print a function that copies the string pointed to by src
 *@dest: To copy to
 *@src: To copy from
 *Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int r, s;

	for (r = 0; (*(src + r) != '\0'); r++)
	{
		for (s = 0; s < 1; s++)
		{
			dest[s] = src[s];
		}
		dest[r] = '\0';
	}
	return (dest);
}
