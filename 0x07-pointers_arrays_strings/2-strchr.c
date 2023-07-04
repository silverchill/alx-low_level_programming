#include "main.h"

/** _strchr - To locates a character in a string
 * @s: character
 * @c: character
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int q;

	for (q = 0; s[q] >= '\0'; s++)
	{
		if (s[q] == c)
			return (&s[q]);
	}
	return (0);
}
