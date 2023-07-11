#include "main.h"

/**
 * _strdup - a fxn that returns a pointer to a newly allocated space in memory
 * @str: Is a string
 * Return: Null(str = Null), a pointer to the duplicated string(Successful)
 */
char *_strdup(char *str)
{
	unsigned int f = 0;
	unsigned int l = 0;
	char *duplicate;


	if (str == NULL)
		return (NULL);
	while (str[l])
		l++;
	duplicate = malloc(sizeof(char) * (l + 1));

	if (duplicate == NULL)
		return (NULL);
	while ((duplicate[f] = str[f]) != '\0')
		f++;
	return (duplicate);
}
